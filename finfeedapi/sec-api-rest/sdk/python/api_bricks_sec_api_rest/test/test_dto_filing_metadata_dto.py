# coding: utf-8

"""
    FinFeedAPI SEC REST API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

    The version of the OpenAPI document: v1
    Contact: support@apibricks.io
    Generated by OpenAPI Generator (https://openapi-generator.tech)

    Do not edit the class manually.
"""  # noqa: E501


import unittest

from api_bricks_sec_api_rest.models.dto_filing_metadata_dto import DTOFilingMetadataDto

class TestDTOFilingMetadataDto(unittest.TestCase):
    """DTOFilingMetadataDto unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional) -> DTOFilingMetadataDto:
        """Test DTOFilingMetadataDto
            include_optional is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # uncomment below to create an instance of `DTOFilingMetadataDto`
        """
        model = DTOFilingMetadataDto()
        if include_optional:
            return DTOFilingMetadataDto(
                cik = 56,
                accession_number = '',
                filing_date = datetime.datetime.strptime('1975-12-30', '%Y-%m-%d').date(),
                report_date = datetime.datetime.strptime('1975-12-30', '%Y-%m-%d').date(),
                acceptance_date_time = datetime.datetime.strptime('2013-10-20 19:20:30.00', '%Y-%m-%d %H:%M:%S.%f'),
                act = '',
                form = '',
                file_number = '',
                film_number = '',
                items = '',
                core_type = '',
                size = 56,
                is_xbrl = True,
                is_inline_xbrl = True,
                primary_document = '',
                primary_doc_description = '',
                source_file = ''
            )
        else:
            return DTOFilingMetadataDto(
        )
        """

    def testDTOFilingMetadataDto(self):
        """Test DTOFilingMetadataDto"""
        # inst_req_only = self.make_instance(include_optional=False)
        # inst_req_and_optional = self.make_instance(include_optional=True)

if __name__ == '__main__':
    unittest.main()
