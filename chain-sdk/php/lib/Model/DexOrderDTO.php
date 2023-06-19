<?php
/**
 * DexOrderDTO
 *
 * PHP version 7.4
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * On Chain Dapps - REST API
 *
 * This section will provide necessary information about the `OnChain API` protocol.  <br/><br/> Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 6.6.0
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Model;

use \ArrayAccess;
use \OpenAPI\Client\ObjectSerializer;

/**
 * DexOrderDTO Class Doc Comment
 *
 * @category Class
 * @description Order submitted by an user. It has a validity (dates) so they can only be executed from/until some given batches. Partial executions of this trades must respect the limit price.
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<string, mixed>
 */
class DexOrderDTO implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'Dex.OrderDTO';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'entry_time' => '\DateTime',
        'recv_time' => '\DateTime',
        'block_number' => 'int',
        'id' => 'string',
        'owner' => 'string',
        'order_id' => 'int',
        'from_batch_id' => 'string',
        'from_epoch' => 'string',
        'until_batch_id' => 'string',
        'until_epoch' => 'string',
        'buy_token' => 'string',
        'sell_token' => 'string',
        'price_numerator' => 'string',
        'price_denominator' => 'string',
        'max_sell_amount' => 'string',
        'min_receive_amount' => 'string',
        'sold_volume' => 'string',
        'bought_volume' => 'string',
        'create_epoch' => 'string',
        'cancel_epoch' => 'string',
        'delete_epoch' => 'string',
        'tx_hash' => 'string',
        'tx_log_index' => 'string',
        'vid' => 'int'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'entry_time' => 'date-time',
        'recv_time' => 'date-time',
        'block_number' => 'int64',
        'id' => null,
        'owner' => null,
        'order_id' => 'int32',
        'from_batch_id' => null,
        'from_epoch' => null,
        'until_batch_id' => null,
        'until_epoch' => null,
        'buy_token' => null,
        'sell_token' => null,
        'price_numerator' => null,
        'price_denominator' => null,
        'max_sell_amount' => null,
        'min_receive_amount' => null,
        'sold_volume' => null,
        'bought_volume' => null,
        'create_epoch' => null,
        'cancel_epoch' => null,
        'delete_epoch' => null,
        'tx_hash' => null,
        'tx_log_index' => null,
        'vid' => 'int64'
    ];

    /**
      * Array of nullable properties. Used for (de)serialization
      *
      * @var boolean[]
      */
    protected static array $openAPINullables = [
        'entry_time' => false,
		'recv_time' => false,
		'block_number' => false,
		'id' => true,
		'owner' => true,
		'order_id' => false,
		'from_batch_id' => true,
		'from_epoch' => true,
		'until_batch_id' => true,
		'until_epoch' => true,
		'buy_token' => true,
		'sell_token' => true,
		'price_numerator' => true,
		'price_denominator' => true,
		'max_sell_amount' => true,
		'min_receive_amount' => true,
		'sold_volume' => true,
		'bought_volume' => true,
		'create_epoch' => true,
		'cancel_epoch' => true,
		'delete_epoch' => true,
		'tx_hash' => true,
		'tx_log_index' => true,
		'vid' => false
    ];

    /**
      * If a nullable field gets set to null, insert it here
      *
      * @var boolean[]
      */
    protected array $openAPINullablesSetToNull = [];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPITypes()
    {
        return self::$openAPITypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPIFormats()
    {
        return self::$openAPIFormats;
    }

    /**
     * Array of nullable properties
     *
     * @return array
     */
    protected static function openAPINullables(): array
    {
        return self::$openAPINullables;
    }

    /**
     * Array of nullable field names deliberately set to null
     *
     * @return boolean[]
     */
    private function getOpenAPINullablesSetToNull(): array
    {
        return $this->openAPINullablesSetToNull;
    }

    /**
     * Setter - Array of nullable field names deliberately set to null
     *
     * @param boolean[] $openAPINullablesSetToNull
     */
    private function setOpenAPINullablesSetToNull(array $openAPINullablesSetToNull): void
    {
        $this->openAPINullablesSetToNull = $openAPINullablesSetToNull;
    }

    /**
     * Checks if a property is nullable
     *
     * @param string $property
     * @return bool
     */
    public static function isNullable(string $property): bool
    {
        return self::openAPINullables()[$property] ?? false;
    }

    /**
     * Checks if a nullable property is set to null.
     *
     * @param string $property
     * @return bool
     */
    public function isNullableSetToNull(string $property): bool
    {
        return in_array($property, $this->getOpenAPINullablesSetToNull(), true);
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'entry_time' => 'entry_time',
        'recv_time' => 'recv_time',
        'block_number' => 'block_number',
        'id' => 'id',
        'owner' => 'owner',
        'order_id' => 'order_id',
        'from_batch_id' => 'from_batch_id',
        'from_epoch' => 'from_epoch',
        'until_batch_id' => 'until_batch_id',
        'until_epoch' => 'until_epoch',
        'buy_token' => 'buy_token',
        'sell_token' => 'sell_token',
        'price_numerator' => 'price_numerator',
        'price_denominator' => 'price_denominator',
        'max_sell_amount' => 'max_sell_amount',
        'min_receive_amount' => 'min_receive_amount',
        'sold_volume' => 'sold_volume',
        'bought_volume' => 'bought_volume',
        'create_epoch' => 'create_epoch',
        'cancel_epoch' => 'cancel_epoch',
        'delete_epoch' => 'delete_epoch',
        'tx_hash' => 'tx_hash',
        'tx_log_index' => 'tx_log_index',
        'vid' => 'vid'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'entry_time' => 'setEntryTime',
        'recv_time' => 'setRecvTime',
        'block_number' => 'setBlockNumber',
        'id' => 'setId',
        'owner' => 'setOwner',
        'order_id' => 'setOrderId',
        'from_batch_id' => 'setFromBatchId',
        'from_epoch' => 'setFromEpoch',
        'until_batch_id' => 'setUntilBatchId',
        'until_epoch' => 'setUntilEpoch',
        'buy_token' => 'setBuyToken',
        'sell_token' => 'setSellToken',
        'price_numerator' => 'setPriceNumerator',
        'price_denominator' => 'setPriceDenominator',
        'max_sell_amount' => 'setMaxSellAmount',
        'min_receive_amount' => 'setMinReceiveAmount',
        'sold_volume' => 'setSoldVolume',
        'bought_volume' => 'setBoughtVolume',
        'create_epoch' => 'setCreateEpoch',
        'cancel_epoch' => 'setCancelEpoch',
        'delete_epoch' => 'setDeleteEpoch',
        'tx_hash' => 'setTxHash',
        'tx_log_index' => 'setTxLogIndex',
        'vid' => 'setVid'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'entry_time' => 'getEntryTime',
        'recv_time' => 'getRecvTime',
        'block_number' => 'getBlockNumber',
        'id' => 'getId',
        'owner' => 'getOwner',
        'order_id' => 'getOrderId',
        'from_batch_id' => 'getFromBatchId',
        'from_epoch' => 'getFromEpoch',
        'until_batch_id' => 'getUntilBatchId',
        'until_epoch' => 'getUntilEpoch',
        'buy_token' => 'getBuyToken',
        'sell_token' => 'getSellToken',
        'price_numerator' => 'getPriceNumerator',
        'price_denominator' => 'getPriceDenominator',
        'max_sell_amount' => 'getMaxSellAmount',
        'min_receive_amount' => 'getMinReceiveAmount',
        'sold_volume' => 'getSoldVolume',
        'bought_volume' => 'getBoughtVolume',
        'create_epoch' => 'getCreateEpoch',
        'cancel_epoch' => 'getCancelEpoch',
        'delete_epoch' => 'getDeleteEpoch',
        'tx_hash' => 'getTxHash',
        'tx_log_index' => 'getTxLogIndex',
        'vid' => 'getVid'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$openAPIModelName;
    }


    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->setIfExists('entry_time', $data ?? [], null);
        $this->setIfExists('recv_time', $data ?? [], null);
        $this->setIfExists('block_number', $data ?? [], null);
        $this->setIfExists('id', $data ?? [], null);
        $this->setIfExists('owner', $data ?? [], null);
        $this->setIfExists('order_id', $data ?? [], null);
        $this->setIfExists('from_batch_id', $data ?? [], null);
        $this->setIfExists('from_epoch', $data ?? [], null);
        $this->setIfExists('until_batch_id', $data ?? [], null);
        $this->setIfExists('until_epoch', $data ?? [], null);
        $this->setIfExists('buy_token', $data ?? [], null);
        $this->setIfExists('sell_token', $data ?? [], null);
        $this->setIfExists('price_numerator', $data ?? [], null);
        $this->setIfExists('price_denominator', $data ?? [], null);
        $this->setIfExists('max_sell_amount', $data ?? [], null);
        $this->setIfExists('min_receive_amount', $data ?? [], null);
        $this->setIfExists('sold_volume', $data ?? [], null);
        $this->setIfExists('bought_volume', $data ?? [], null);
        $this->setIfExists('create_epoch', $data ?? [], null);
        $this->setIfExists('cancel_epoch', $data ?? [], null);
        $this->setIfExists('delete_epoch', $data ?? [], null);
        $this->setIfExists('tx_hash', $data ?? [], null);
        $this->setIfExists('tx_log_index', $data ?? [], null);
        $this->setIfExists('vid', $data ?? [], null);
    }

    /**
    * Sets $this->container[$variableName] to the given data or to the given default Value; if $variableName
    * is nullable and its value is set to null in the $fields array, then mark it as "set to null" in the
    * $this->openAPINullablesSetToNull array
    *
    * @param string $variableName
    * @param array  $fields
    * @param mixed  $defaultValue
    */
    private function setIfExists(string $variableName, array $fields, $defaultValue): void
    {
        if (self::isNullable($variableName) && array_key_exists($variableName, $fields) && is_null($fields[$variableName])) {
            $this->openAPINullablesSetToNull[] = $variableName;
        }

        $this->container[$variableName] = $fields[$variableName] ?? $defaultValue;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets entry_time
     *
     * @return \DateTime|null
     */
    public function getEntryTime()
    {
        return $this->container['entry_time'];
    }

    /**
     * Sets entry_time
     *
     * @param \DateTime|null $entry_time entry_time
     *
     * @return self
     */
    public function setEntryTime($entry_time)
    {
        if (is_null($entry_time)) {
            throw new \InvalidArgumentException('non-nullable entry_time cannot be null');
        }
        $this->container['entry_time'] = $entry_time;

        return $this;
    }

    /**
     * Gets recv_time
     *
     * @return \DateTime|null
     */
    public function getRecvTime()
    {
        return $this->container['recv_time'];
    }

    /**
     * Sets recv_time
     *
     * @param \DateTime|null $recv_time recv_time
     *
     * @return self
     */
    public function setRecvTime($recv_time)
    {
        if (is_null($recv_time)) {
            throw new \InvalidArgumentException('non-nullable recv_time cannot be null');
        }
        $this->container['recv_time'] = $recv_time;

        return $this;
    }

    /**
     * Gets block_number
     *
     * @return int|null
     */
    public function getBlockNumber()
    {
        return $this->container['block_number'];
    }

    /**
     * Sets block_number
     *
     * @param int|null $block_number Number of block in which entity was recorded.
     *
     * @return self
     */
    public function setBlockNumber($block_number)
    {
        if (is_null($block_number)) {
            throw new \InvalidArgumentException('non-nullable block_number cannot be null');
        }
        $this->container['block_number'] = $block_number;

        return $this;
    }

    /**
     * Gets id
     *
     * @return string|null
     */
    public function getId()
    {
        return $this->container['id'];
    }

    /**
     * Sets id
     *
     * @param string|null $id Identifier, format: (owner address)-(order id)
     *
     * @return self
     */
    public function setId($id)
    {
        if (is_null($id)) {
            array_push($this->openAPINullablesSetToNull, 'id');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('id', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['id'] = $id;

        return $this;
    }

    /**
     * Gets owner
     *
     * @return string|null
     */
    public function getOwner()
    {
        return $this->container['owner'];
    }

    /**
     * Sets owner
     *
     * @param string|null $owner Reference to owner.
     *
     * @return self
     */
    public function setOwner($owner)
    {
        if (is_null($owner)) {
            array_push($this->openAPINullablesSetToNull, 'owner');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('owner', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['owner'] = $owner;

        return $this;
    }

    /**
     * Gets order_id
     *
     * @return int|null
     */
    public function getOrderId()
    {
        return $this->container['order_id'];
    }

    /**
     * Sets order_id
     *
     * @param int|null $order_id Order id.
     *
     * @return self
     */
    public function setOrderId($order_id)
    {
        if (is_null($order_id)) {
            throw new \InvalidArgumentException('non-nullable order_id cannot be null');
        }
        $this->container['order_id'] = $order_id;

        return $this;
    }

    /**
     * Gets from_batch_id
     *
     * @return string|null
     */
    public function getFromBatchId()
    {
        return $this->container['from_batch_id'];
    }

    /**
     * Sets from_batch_id
     *
     * @param string|null $from_batch_id Batch id from which order became valid.
     *
     * @return self
     */
    public function setFromBatchId($from_batch_id)
    {
        if (is_null($from_batch_id)) {
            array_push($this->openAPINullablesSetToNull, 'from_batch_id');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('from_batch_id', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['from_batch_id'] = $from_batch_id;

        return $this;
    }

    /**
     * Gets from_epoch
     *
     * @return string|null
     */
    public function getFromEpoch()
    {
        return $this->container['from_epoch'];
    }

    /**
     * Sets from_epoch
     *
     * @param string|null $from_epoch Start of epoch in which order was placed and became valid.
     *
     * @return self
     */
    public function setFromEpoch($from_epoch)
    {
        if (is_null($from_epoch)) {
            array_push($this->openAPINullablesSetToNull, 'from_epoch');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('from_epoch', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['from_epoch'] = $from_epoch;

        return $this;
    }

    /**
     * Gets until_batch_id
     *
     * @return string|null
     */
    public function getUntilBatchId()
    {
        return $this->container['until_batch_id'];
    }

    /**
     * Sets until_batch_id
     *
     * @param string|null $until_batch_id Batch id until which trade was still valid.
     *
     * @return self
     */
    public function setUntilBatchId($until_batch_id)
    {
        if (is_null($until_batch_id)) {
            array_push($this->openAPINullablesSetToNull, 'until_batch_id');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('until_batch_id', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['until_batch_id'] = $until_batch_id;

        return $this;
    }

    /**
     * Gets until_epoch
     *
     * @return string|null
     */
    public function getUntilEpoch()
    {
        return $this->container['until_epoch'];
    }

    /**
     * Sets until_epoch
     *
     * @param string|null $until_epoch End of epoch in which order was placed.
     *
     * @return self
     */
    public function setUntilEpoch($until_epoch)
    {
        if (is_null($until_epoch)) {
            array_push($this->openAPINullablesSetToNull, 'until_epoch');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('until_epoch', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['until_epoch'] = $until_epoch;

        return $this;
    }

    /**
     * Gets buy_token
     *
     * @return string|null
     */
    public function getBuyToken()
    {
        return $this->container['buy_token'];
    }

    /**
     * Sets buy_token
     *
     * @param string|null $buy_token Identifier of token that was bought.
     *
     * @return self
     */
    public function setBuyToken($buy_token)
    {
        if (is_null($buy_token)) {
            array_push($this->openAPINullablesSetToNull, 'buy_token');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('buy_token', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['buy_token'] = $buy_token;

        return $this;
    }

    /**
     * Gets sell_token
     *
     * @return string|null
     */
    public function getSellToken()
    {
        return $this->container['sell_token'];
    }

    /**
     * Sets sell_token
     *
     * @param string|null $sell_token Identifier of token that was sold.
     *
     * @return self
     */
    public function setSellToken($sell_token)
    {
        if (is_null($sell_token)) {
            array_push($this->openAPINullablesSetToNull, 'sell_token');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('sell_token', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['sell_token'] = $sell_token;

        return $this;
    }

    /**
     * Gets price_numerator
     *
     * @return string|null
     */
    public function getPriceNumerator()
    {
        return $this->container['price_numerator'];
    }

    /**
     * Sets price_numerator
     *
     * @param string|null $price_numerator Price enumerator.
     *
     * @return self
     */
    public function setPriceNumerator($price_numerator)
    {
        if (is_null($price_numerator)) {
            array_push($this->openAPINullablesSetToNull, 'price_numerator');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('price_numerator', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['price_numerator'] = $price_numerator;

        return $this;
    }

    /**
     * Gets price_denominator
     *
     * @return string|null
     */
    public function getPriceDenominator()
    {
        return $this->container['price_denominator'];
    }

    /**
     * Sets price_denominator
     *
     * @param string|null $price_denominator Price denominator.
     *
     * @return self
     */
    public function setPriceDenominator($price_denominator)
    {
        if (is_null($price_denominator)) {
            array_push($this->openAPINullablesSetToNull, 'price_denominator');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('price_denominator', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['price_denominator'] = $price_denominator;

        return $this;
    }

    /**
     * Gets max_sell_amount
     *
     * @return string|null
     */
    public function getMaxSellAmount()
    {
        return $this->container['max_sell_amount'];
    }

    /**
     * Sets max_sell_amount
     *
     * @param string|null $max_sell_amount Maximum sell amount.
     *
     * @return self
     */
    public function setMaxSellAmount($max_sell_amount)
    {
        if (is_null($max_sell_amount)) {
            array_push($this->openAPINullablesSetToNull, 'max_sell_amount');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('max_sell_amount', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['max_sell_amount'] = $max_sell_amount;

        return $this;
    }

    /**
     * Gets min_receive_amount
     *
     * @return string|null
     */
    public function getMinReceiveAmount()
    {
        return $this->container['min_receive_amount'];
    }

    /**
     * Sets min_receive_amount
     *
     * @param string|null $min_receive_amount Minimum receive amount.
     *
     * @return self
     */
    public function setMinReceiveAmount($min_receive_amount)
    {
        if (is_null($min_receive_amount)) {
            array_push($this->openAPINullablesSetToNull, 'min_receive_amount');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('min_receive_amount', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['min_receive_amount'] = $min_receive_amount;

        return $this;
    }

    /**
     * Gets sold_volume
     *
     * @return string|null
     */
    public function getSoldVolume()
    {
        return $this->container['sold_volume'];
    }

    /**
     * Sets sold_volume
     *
     * @param string|null $sold_volume Sold volume.
     *
     * @return self
     */
    public function setSoldVolume($sold_volume)
    {
        if (is_null($sold_volume)) {
            array_push($this->openAPINullablesSetToNull, 'sold_volume');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('sold_volume', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['sold_volume'] = $sold_volume;

        return $this;
    }

    /**
     * Gets bought_volume
     *
     * @return string|null
     */
    public function getBoughtVolume()
    {
        return $this->container['bought_volume'];
    }

    /**
     * Sets bought_volume
     *
     * @param string|null $bought_volume Bought volume.
     *
     * @return self
     */
    public function setBoughtVolume($bought_volume)
    {
        if (is_null($bought_volume)) {
            array_push($this->openAPINullablesSetToNull, 'bought_volume');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('bought_volume', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['bought_volume'] = $bought_volume;

        return $this;
    }

    /**
     * Gets create_epoch
     *
     * @return string|null
     */
    public function getCreateEpoch()
    {
        return $this->container['create_epoch'];
    }

    /**
     * Sets create_epoch
     *
     * @param string|null $create_epoch Epoch in which order was created.
     *
     * @return self
     */
    public function setCreateEpoch($create_epoch)
    {
        if (is_null($create_epoch)) {
            array_push($this->openAPINullablesSetToNull, 'create_epoch');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('create_epoch', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['create_epoch'] = $create_epoch;

        return $this;
    }

    /**
     * Gets cancel_epoch
     *
     * @return string|null
     */
    public function getCancelEpoch()
    {
        return $this->container['cancel_epoch'];
    }

    /**
     * Sets cancel_epoch
     *
     * @param string|null $cancel_epoch Epoch in which order was cancelled.
     *
     * @return self
     */
    public function setCancelEpoch($cancel_epoch)
    {
        if (is_null($cancel_epoch)) {
            array_push($this->openAPINullablesSetToNull, 'cancel_epoch');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('cancel_epoch', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['cancel_epoch'] = $cancel_epoch;

        return $this;
    }

    /**
     * Gets delete_epoch
     *
     * @return string|null
     */
    public function getDeleteEpoch()
    {
        return $this->container['delete_epoch'];
    }

    /**
     * Sets delete_epoch
     *
     * @param string|null $delete_epoch Epoch in which order was deleted.
     *
     * @return self
     */
    public function setDeleteEpoch($delete_epoch)
    {
        if (is_null($delete_epoch)) {
            array_push($this->openAPINullablesSetToNull, 'delete_epoch');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('delete_epoch', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['delete_epoch'] = $delete_epoch;

        return $this;
    }

    /**
     * Gets tx_hash
     *
     * @return string|null
     */
    public function getTxHash()
    {
        return $this->container['tx_hash'];
    }

    /**
     * Sets tx_hash
     *
     * @param string|null $tx_hash Transaction hash.
     *
     * @return self
     */
    public function setTxHash($tx_hash)
    {
        if (is_null($tx_hash)) {
            array_push($this->openAPINullablesSetToNull, 'tx_hash');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('tx_hash', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['tx_hash'] = $tx_hash;

        return $this;
    }

    /**
     * Gets tx_log_index
     *
     * @return string|null
     */
    public function getTxLogIndex()
    {
        return $this->container['tx_log_index'];
    }

    /**
     * Sets tx_log_index
     *
     * @param string|null $tx_log_index Event index within transaction.
     *
     * @return self
     */
    public function setTxLogIndex($tx_log_index)
    {
        if (is_null($tx_log_index)) {
            array_push($this->openAPINullablesSetToNull, 'tx_log_index');
        } else {
            $nullablesSetToNull = $this->getOpenAPINullablesSetToNull();
            $index = array_search('tx_log_index', $nullablesSetToNull);
            if ($index !== FALSE) {
                unset($nullablesSetToNull[$index]);
                $this->setOpenAPINullablesSetToNull($nullablesSetToNull);
            }
        }
        $this->container['tx_log_index'] = $tx_log_index;

        return $this;
    }

    /**
     * Gets vid
     *
     * @return int|null
     */
    public function getVid()
    {
        return $this->container['vid'];
    }

    /**
     * Sets vid
     *
     * @param int|null $vid 
     *
     * @return self
     */
    public function setVid($vid)
    {
        if (is_null($vid)) {
            throw new \InvalidArgumentException('non-nullable vid cannot be null');
        }
        $this->container['vid'] = $vid;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset): bool
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed|null
     */
    #[\ReturnTypeWillChange]
    public function offsetGet($offset)
    {
        return $this->container[$offset] ?? null;
    }

    /**
     * Sets value based on offset.
     *
     * @param int|null $offset Offset
     * @param mixed    $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value): void
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset): void
    {
        unset($this->container[$offset]);
    }

    /**
     * Serializes the object to a value that can be serialized natively by json_encode().
     * @link https://www.php.net/manual/en/jsonserializable.jsonserialize.php
     *
     * @return mixed Returns data which can be serialized by json_encode(), which is a value
     * of any type other than a resource.
     */
    #[\ReturnTypeWillChange]
    public function jsonSerialize()
    {
       return ObjectSerializer::sanitizeForSerialization($this);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        return json_encode(
            ObjectSerializer::sanitizeForSerialization($this),
            JSON_PRETTY_PRINT
        );
    }

    /**
     * Gets a header-safe presentation of the object
     *
     * @return string
     */
    public function toHeaderValue()
    {
        return json_encode(ObjectSerializer::sanitizeForSerialization($this));
    }
}

