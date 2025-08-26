# flake8: noqa

if __import__("typing").TYPE_CHECKING:
    # import apis into api package
    from api_bricks_stock_api_rest.api.metadata_api import MetadataApi
    from api_bricks_stock_api_rest.api.native_iex_api import NativeIEXApi
    from api_bricks_stock_api_rest.api.ohlcv_api import OhlcvApi
    
else:
    from lazy_imports import LazyModule, as_package, load

    load(
        LazyModule(
            *as_package(__file__),
            """# import apis into api package
from api_bricks_stock_api_rest.api.metadata_api import MetadataApi
from api_bricks_stock_api_rest.api.native_iex_api import NativeIEXApi
from api_bricks_stock_api_rest.api.ohlcv_api import OhlcvApi

""",
            name=__name__,
            doc=__doc__,
        )
    )
