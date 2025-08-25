# flake8: noqa

if __import__("typing").TYPE_CHECKING:
    # import apis into api package
    from api_bricks_currencies_api_rest_historical.api.exchange_rates_api import ExchangeRatesApi
    from api_bricks_currencies_api_rest_historical.api.metadata_api import MetadataApi
    
else:
    from lazy_imports import LazyModule, as_package, load

    load(
        LazyModule(
            *as_package(__file__),
            """# import apis into api package
from api_bricks_currencies_api_rest_historical.api.exchange_rates_api import ExchangeRatesApi
from api_bricks_currencies_api_rest_historical.api.metadata_api import MetadataApi

""",
            name=__name__,
            doc=__doc__,
        )
    )
