/*
 * On Chain Dapps - REST API
 * \nThis section will provide necessary information about the `OnChain API` protocol. \n<br/><br/>\nLorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.        \n                    
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * OASCurveAmplificationCoeffChangeLogD
 */
public class OASCurveAmplificationCoeffChangeLogD implements OAS.MappedProperties {
    /**
     * Get entryTime
     * @return entryTime
     */
    public Datetime entryTime { get; set; }

    /**
     * Get recvTime
     * @return recvTime
     */
    public Datetime recvTime { get; set; }

    /**
     * Number of block in which entity was recorded.
     * @return blockNumber
     */
    public Long blockNumber { get; set; }

    /**
     * 
     * @return id
     */
    public String id { get; set; }

    /**
     * 
     * @return pool
     */
    public String pool { get; set; }

    /**
     * 
     * @return value
     */
    public String value { get; set; }

    /**
     * 
     * @return block
     */
    public String block { get; set; }

    /**
     * 
     * @return timestamp
     */
    public String timestamp { get; set; }

    /**
     * 
     * @return r_transaction
     */
    public String r_transaction { get; set; }

    /**
     * 
     * @return vid
     */
    public Long vid { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'transaction' => 'r_transaction'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'transaction' => 'r_transaction'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'transaction' => 'r_transaction'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'transaction' => 'r_transaction'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASCurveAmplificationCoeffChangeLogD getExample() {
        OASCurveAmplificationCoeffChangeLogD curveAmplificationCoeffChangeLogDTO = new OASCurveAmplificationCoeffChangeLogD();
          curveAmplificationCoeffChangeLogDTO.entryTime = Datetime.newInstanceGmt(2000, 1, 23, 4, 56, 7);
          curveAmplificationCoeffChangeLogDTO.recvTime = Datetime.newInstanceGmt(2000, 1, 23, 4, 56, 7);
          curveAmplificationCoeffChangeLogDTO.blockNumber = 123456789L;
          curveAmplificationCoeffChangeLogDTO.id = '';
          curveAmplificationCoeffChangeLogDTO.pool = '';
          curveAmplificationCoeffChangeLogDTO.value = '';
          curveAmplificationCoeffChangeLogDTO.block = '';
          curveAmplificationCoeffChangeLogDTO.timestamp = '';
          curveAmplificationCoeffChangeLogDTO.r_transaction = '';
          curveAmplificationCoeffChangeLogDTO.vid = 123456789L;
        return curveAmplificationCoeffChangeLogDTO;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASCurveAmplificationCoeffChangeLogD) {           
            OASCurveAmplificationCoeffChangeLogD curveAmplificationCoeffChangeLogDTO = (OASCurveAmplificationCoeffChangeLogD) obj;
            return this.entryTime == curveAmplificationCoeffChangeLogDTO.entryTime
                && this.recvTime == curveAmplificationCoeffChangeLogDTO.recvTime
                && this.blockNumber == curveAmplificationCoeffChangeLogDTO.blockNumber
                && this.id == curveAmplificationCoeffChangeLogDTO.id
                && this.pool == curveAmplificationCoeffChangeLogDTO.pool
                && this.value == curveAmplificationCoeffChangeLogDTO.value
                && this.block == curveAmplificationCoeffChangeLogDTO.block
                && this.timestamp == curveAmplificationCoeffChangeLogDTO.timestamp
                && this.r_transaction == curveAmplificationCoeffChangeLogDTO.r_transaction
                && this.vid == curveAmplificationCoeffChangeLogDTO.vid;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (entryTime == null ? 0 : System.hashCode(entryTime));
        hashCode = (17 * hashCode) + (recvTime == null ? 0 : System.hashCode(recvTime));
        hashCode = (17 * hashCode) + (blockNumber == null ? 0 : System.hashCode(blockNumber));
        hashCode = (17 * hashCode) + (id == null ? 0 : System.hashCode(id));
        hashCode = (17 * hashCode) + (pool == null ? 0 : System.hashCode(pool));
        hashCode = (17 * hashCode) + (value == null ? 0 : System.hashCode(value));
        hashCode = (17 * hashCode) + (block == null ? 0 : System.hashCode(block));
        hashCode = (17 * hashCode) + (timestamp == null ? 0 : System.hashCode(timestamp));
        hashCode = (17 * hashCode) + (r_transaction == null ? 0 : System.hashCode(r_transaction));
        hashCode = (17 * hashCode) + (vid == null ? 0 : System.hashCode(vid));
        return hashCode;
    }
}
