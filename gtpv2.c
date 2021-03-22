typedef struct GTPV2MessageName
{
	unsigned char messageType;
	char 	      messageName[100];
}GTPV2MessageName;

typedef struct GTPV2Header
{
	unsigned char version:3;
	_Bool piggybackingFlag;
	_Bool tEIDpresence;
	unsigned char messageType;
	unsigned short messageLength;
	unsigned tEID[4];
    	unsigned long sequenceNumber:24;
    	unsigned char spare;

}GTPV2Header;

typedef struct GTPV2IEHeader
{
  unsigned char type;
  unsigned short length;
  unsigned char spare:4;
  unsigned char instance:4;
}GTPV2IEHeader;

typedef struct GTPV2IEName
{
    unsigned char   ieType;
    char            ieName[100];
    unsigned char   displayType;
}GTPV2IEName;
enum GTPC_V2_MSG
{
    //id_Reserved	=	0	,
    id_EchoRequest	=	1	,
    id_EchoResponse	=	2	,
    id_VersionNotSupportedIndication	=	3	,
    id_CreateSessionRequest	=	32	,
    id_CreateSessionResponse	=	33	,
    id_DeleteSessionRequest	=	36	,
    id_DeleteSessionResponse	=	37	,
    id_ModifyBearerRequest	=	34	,
    id_ModifyBearerResponse	=	35	,
    id_ChangeNotificationRequest	=	38	,
    id_ChangeNotificationResponse	=	39	,
    id_ResumeNotification	=	164	,
    id_ResumeAcknowledge	=	165	,
    id_ModifyBearerCommand	=	64	,

    id_ModifyBearerFailureIndication	=	65	,

    id_DeleteBearerCommand	=	66	,

    id_DeleteBearerFailureIndication	=	67	,

    id_BearerResourceCommand	=	68	,

    id_BearerResourceFailureIndication	=	69	,

    id_DownlinkDataNotificationFailureIndication	=	70	,

    id_TraceSessionActivation	=	71	,

    id_TraceSessionDeactivation	=	72	,

    id_StopPagingIndication	=	73	,

    id_CreateBearerRequest	=	95	,
    id_CreateBearerResponse	=	96	,
    id_UpdateBearerRequest	=	97	,
    id_UpdateBearerResponse	=	98	,
    id_DeleteBearerRequest	=	99	,
    id_DeleteBearerResponse	=	100	,
    id_DeletePDNConnectionSetRequest	=	101	,
    id_DeletePDNConnectionSetResponse	=	102	,
    // ****newly added***
    id_PGWDownlinkTriggeringNotification=103,//,"PGW Downlink Triggering Notification"},
    id_PGWDownlinkTriggeringAcknowledge=104,//,"PGW Downlink Triggering Acknowledge"},
    // ******************
    id_IdentificationRequest	=	128	,
    id_IdentificationResponse	=	129	,
    id_ContextRequest	=	130	,
    id_ContextResponse	=	131	,
    id_ContextAcknowledge	=	132	,
    id_ForwardRelocationRequest	=	133	,
    id_ForwardRelocationResponse	=	134	,
    id_ForwardRelocationCompleteNotification	=	135	,
    id_ForwardRelocationCompleteAcknowledge	=	136	,
    id_ForwardAccessContextNotification	=	137	,
    id_ForwardAccessContextAcknowledge	=	138	,
    id_RelocationCancelRequest	=	139	,
    id_RelocationCancelResponse	=	140	,
    id_ConfigurationTransferTunnel	=	141	,
    id_RANInformationRelay	=	152	,
    id_DetachNotification	=	149	,
    id_DetachAcknowledge	=	150	,
    id_CSPagingIndication	=	151	,
    id_AlertMMENotification	=	153	,
    id_AlertMMEAcknowledge	=	154	,
    id_UEActivityNotification	=	155	,
    id_UEActivityAcknowledge	=	156	,
    id_ISRStatusIndication=157,//,,"ISR Status Indication"},
    id_SuspendNotification	=	162	,
    id_SuspendAcknowledge	=	163	,
    id_CreateForwardingTunnelRequest	=	160	,
    id_CreateForwardingTunnelResponse	=	161	,
    id_CreateIndirectDataForwardingTunnelRequest	=	166	,
    id_CreateIndirectDataForwardingTunnelResponse	=	167	,
    id_DeleteIndirectDataForwardingTunnelRequest	=	168	,
    id_DeleteIndirectDataForwardingTunnelResponse	=	169	,
    id_ReleaseAccessBearersRequest	=	170	,
    id_ReleaseAccessBearersResponse	=	171	,
    id_DownlinkDataNotification	=	176	,
    id_DownlinkDataNotificationAcknowledge	=	177	,
    id_PGWRestartNotification	=	179	,
    id_PGWRestartNotificationAcknowledge	=	180	,
    id_Reserved1	=	1	,
    id_UpdatePDNConnectionSetRequest	=	200	,
    id_UpdatePDNConnectionSetResponse	=	201	,
    id_ModifyAccessBearersRequest	=	211	,
    id_ModifyAccessBearersResponse	=	212	,
    id_MBMSSessionStartRequest	=	231	 ,
    id_MBMSSessionStartResponse	=	232	,
    id_MBMSSessionUpdateRequest	=	233	,
    id_MBMSSessionUpdateResponse	=	234	,
    id_MBMSSessionStopRequest	=	235	,
    id_MBMSSessionStopResponse	=	236
};


enum GTPC_V2_IE{
//id_IE_Reserved	=	0	,
id_InternationalMobileSubscriberIdentity	=	1	,
id_GTPV2_Cause	=	2	,
id_Recovery_RestartCounter	=	3	,
//id_ReservedforS101interface	=	4 to 50	,
//id_ReservedforSvinterface	=	51 to 70	,
id_STN_SR=51,
id_AccessPointName_GTPV2	=	71	,
id_AggregateMaximumBitRate	=	72	,
id_EPSBearerID	=	73	,
id_IPAddress	=	74	,
id_MobileEquipmentIdentity	=	75	,
id_GTPV2_MSISDN	=	76	,
id_Indication	=	77	,
id_ProtocolConfigurationOptions_GTPV2	=	78	,
id_PDNAddressAllocation	=	79	,
id_BearerLevelQualityofService	=	80	,
id_FlowQualityofService	=	81	,
id_GTPV2_RATType	=	82	,
id_ServingNetwork	=	83	,
id_EPSBearerLevelTrafficFlowTemplate	=	84	,
id_TrafficAggregateDescription	=	85	,
id_UserLocationInformation	=	86	,
id_FullyQualifiedTunnelEndpointIdentifier	=	87	,
id_TMSI	=	88	,
id_GlobalCN_Id	=	89	,
id_S103PDNDataForwardingInfo	=	90	,
id_S1_UDataForwardingInfo	=	91	,
id_DelayValue	=	92	,
id_BearerContext	=	93	,
id_ChargingID	=	94	,
id_ChargingCharacteristics	=	95	,
id_TraceInformation	=	96	,
id_BearerFlags	=	97	,
//id_Reserved	=	98	,
id_GTPV2_PDNType	=	99	,
id_ProcedureTransactionID	=	100	,
id_DRXParameter_GTPV2	=	101	,
//id_Reserved	=	102	,
id_MMContext_GSMKeyandTriplets	=	103	,
id_MMContext_UMTSKeyUsedCipherandQuintuplets	=	104	,
id_MMContext_GSMKeyUsedCipherandQuintuplets	=	105	,
id_MMContext_UMTSKeyandQuintuplets	=	106	,
id_MMContext_EPSSecurityContextQuadrupletsandQuintuplets	=	107	,
id_MMContext_UMTSKey_QuadrupletsandQuintuplets	=	108	,
id_PDNConnection	=	109	,
id_PDUNumbers	=	110	,
id_PTMSI	=	111	,
id_PTMSISignature_GTPV2	=	112	,
id_HopCounter	=	113	,
id_UETimeZone	=	114	,
id_GTPV2_TraceReference	=	115	,
id_CompleteRequestMessage	=	116	,
id_GTPV2_GUTI	=	117	,
id_F_Container	=	118	,
id_F_Cause	=	119	,
id_SelectedPLMNID	=	120	,
id_TargetIdentification	=	121	,
//id_Reserved	=	122	,
id_PacketFlowID	=	123	,
id_RABContext	=	124	,
id_SourceRNCPDCPContextInfo	=	125	,
id_UDPSourcePortNumber	=	126	,
id_APNRestriction	=	127	,
id_SelectionMode	=	128	,
id_SourceIdentification	=	129	,
//id_Reserved	=	130	,
id_ChangeReportingAction	=	131	,
id_FullyQualifiedPDNConnectionSetIdentifier	=	132	,
id_Channelneeded	=	133	,
id_eMLPPPriority	=	134	,
id_NodeType	=	135	,
id_FullyQualifiedDomainName	=	136	,
id_TransactionIdentifier_GTPV2	=	137	,
id_MBMSSessionDuration	=	138	,
id_GTPV2_MBMSServiceArea	=	139	,
id_MBMSSessionIdentifier	=	140	,
id_MBMSFlowIdentifier	=	141	,
id_MBMSIPMulticastDistribution	=	142	,
id_MBMSDistributionAcknowledge	=	143	,
id_RFSPIndex	=	144	,
id_GTPV2_UserCSGInformation	=	145	,
id_CSGInformationReportingAction	=	146	,
id_CSGID	=	147	,
id_GTPV2_CSGMembershipIndication	=	148	,
id_Serviceindicator	=	149	,
id_DetachType_GTPV2	=	150	,
id_LocalDistiguishedName	=	151	,
id_NodeFeatures	=	152	,
id_MBMSTimetoDataTransfer	=	153	,
id_Throttling	=	154	,
id_GTPV2_AllocationRetentionPriority	=	155	,
id_EPCTimer	=	156	,
id_SignallingPriorityIndication	=	157	,
id_TemporaryMobileGroupIdentity	=	158	,
//Newly Added
id_AdditionalMMcontextforSRVCC=159,
id_AdditionalflagsforSRVCC= 160,
//id_Reserved 161
id_GTPV2_MDTConfiguration= 162,
id_AdditionalProtocolConfigurationOptions= 163,
id_AbsoluteTimeofMBMSDataTransfer= 164,
id_HeNBInformationReporting= 165,
id_IPv4ConfigurationParameters =166,
id_ChangetoReportFlags= 167,
id_ActionIndication =168,
id_GTPV2_TWANIdentifier =169,
id_ULITimestamp =170,
id_MBMSFlags =171,
id_RAN_NASCause =172,
id_CNOperatorSelectionEntity =173,
//id_ Spare.Forfutureuse. 174 to 254

//id_Spare.Forfutureuse.	=	159 to 254	,
id_PrivateExtension	=	255

};

enum GTPC_V2_PRESENCE
{
    gtpcMandatory=1,
    gtpcConditional=2,
    gtpcOptional=3,
    gtpcCondOptional=4
};
typedef struct GTPV2MessageIE
{
    unsigned char						type;
    unsigned char						presenceReq;
    unsigned char						instance;
    char							ieName[150];
}GTPV2MessageIE;
/*
typedef struct EnumStruct
{
    unsigned char index;
    unsigned char value;
}EnumStruct;
*/
enum enuminterfaceType
{
    S1_UeNodeB_GTP_U_interface=0,
    S1_U_SGW_GTP_U_interface,
    S12_RNC_GTP_U_interface,
    S12_SGW_GTP_U_interface,
    S5_S8_SGW_GTP_U_interface,
    S5_S8_PGW_GTP_U_interface,
    S5_S8_SGW_GTP_C_interface,
    S5_S8_PGW_GTP_C_interface,
    S5_S8_SGW_PMIPv6,
    S5_S8_PGW_PMIPv6,
    S11_MME_GTP_C_interface,
    S11_S4_SGW_GTP_C_interface,
    S10_MME_GTP_C_interface,
    S3_MME_GTP_C_interface,
    S3_SGSN_GTP_C_interface,
    S4_SGSN_GTP_U_interface,
    S4_SGW_GTP_U_interface,
    S4_SGSN_GTP_C_interface,
    S16_SGSN_GTP_C_interface,
    eNodeB_GTP_U_interface_for_DL_data_forwarding,
    eNodeB_GTP_U_interface_for_UL_data_forwarding,
    RNC_GTP_U_interface_for_data_forwarding,
    SGSN_GTP_U_interface_for_data_forwarding,
    SGW_GTP_U_interface_for_DL_data_forwarding,
    Sm_MBMS_GW_GTP_C_interface,
    Sn_MBMS_GW_GTP_C_interface,
    Sm_MME_GTP_C_interface,
    Sn_SGSN_GTP_C_interface,
    SGW_GTP_U_interface_for_UL_data_forwarding,
    Sn_SGSN_GTP_U_interface,
    S2b_ePDG_GTP_C_interface,
    S2b_U_ePDG_GTP_U_interface,
    S2b_PGW_GTP_C_interface,
    S2b_U_PGW_GTP_U_interface,
    S2a_TWAN_GTP_U_interface,
    S2a_TWAN_GTP_C_interface,
    S2a_PGW_GTP_C_interface,
    S2a_PGW_GTP_U_interface

};



typedef struct FullyQualifiedTunnelEndpointIdentifier
{
    bool    v4;
    bool    v6;
    enumStruct  interfaceType;
    u_long  teidOrGre;
    u_char  ipv4[4];
    u_char  ipv6[16];
}FullyQualifiedTunnelEndpointIdentifier;

//...............................1-IE_International Mobile Subscriber Identity.....................

typedef OCTET_STRING IMSI;
//..............................2-Cause.................................................................
enum enumCausevalue
{
    //for Request / Initial message,
    reserved0,
    reserved1,
    localDetach,
    completeDetach,
    rATchangedfrom3GPPtoNon3GPP,
    iSRdeactivation,
    errorIndicationreceivedfromRNCoreNodeBorS4orSGSN,
    iMSIDetachOnly,
    reactivationRequested,
    pDNreconnectiontothisAPNdisallowed,
    accesschangedfromNon3GPPto3GPP,
    pDNconnectioninactivitytimerexpires,
    pGWnotresponding,
    networkFailure,
    qoSparametermismatch,
    spare0,
    //Acceptance in a Response / triggered message
    requestaccepted,
    requestacceptedpartially,
    newPDNtypeduetonetworkpreference,
    newPDNtypeduetosingleaddressbeareronly,
    spare1=20,
    //Rejection in a Response / triggered message
    contextNotFound=64,
    invalidMessageFormat,
    versionnotsupportedbynextpeer,
    invalidlength,
    servicenotsupported,
    mandatoryIEincorrect,
    mandatoryIEmissing,
    shallnotbeused1,
    systemfailure,
    noresourcesavailable,
    semanticerrorintheTFToperation,
    syntacticerrorintheTFToperation,
    semanticerrorsinpacketfilters,
    syntacticerrorsinpacketfilters,
    missingorunknownAPN,
    shallnotbeused2,
    gREkeynotfound,
    relocationfailure,
    deniedinRAT,
    preferredPDNtypenotsupported,
    alldynamicaddressesareoccupied,
    uEcontextwithoutTFTalreadyactivated,
    protocoltypenotsupported,
    uEnotresponding,
    uErefuses,
    servicedenied,
    unabletopageUE,
    nomemoryavailable,
    userauthenticationfailed,
    aPNaccessdeniednosubscription,
    requestrejected,
    p_TMSISignaturemismatch,
    iMSIorIMEInotknown,
    semanticerrorintheTADoperation,
    syntacticerrorintheTADoperation,
    shallnotbeused3,
    remotepeernotresponding,
    collisionwithnetworkinitiatedrequest,
    unabletopageUEduetoSuspension,
    conditionalIEmissing,
    aPNRestrictiontypeIncompatiblewithcurrentlyactivePDNconnection,
    invalidoveralllengthofthetriggeredresponsemessageandapiggybackedinitialmessage,
    dataforwardingnotsupported,
    invalidreplyfromremotepeer,
    fallbacktoGTPv1,
    invalidpeer,
    temporarilyrejectedduetohandoverprocedureinprogress,
    modificationsnotlimitedtoS1_Ubearers,
    requestrejectedforaPMIPv6reason,
    aPNCongestion,
    bearerhandlingnotsupported,
    uEalreadyreattached,
    multiplePDNconnectionsforagivenAPNnotallowed=116,
    //Request /Initialmessage
    spare2=240

};
typedef struct __attribute__((packed))  OffendingID
{
    enumStruct typeOfOffendingIE;
    unsigned short length;
    unsigned char spare1:4;
    unsigned char instance:4;
}OffendingID;

typedef struct __attribute__((packed)) CauseGTPV2
{
    enumStruct causeValue;
    _Bool causeSource;
    _Bool bearerContextIE_Error;
    _Bool pDNConnectionIE_Error;
    unsigned char spare0:5;
    _Bool offendingID_Presence;
    OffendingID offendingID;
}CauseGTPV2;
//..................................3_IE_Recovery.................................................................
typedef struct __attribute__((packed)) Recovery
{
    unsigned char reccovery;
}Recovery;
//...................................51_IE_STN-SR.................................................................
enum enumnatureOfAddressIndicator
{
    unknownOfAddressIndicator,
    internationalNumber,
    nationalSignificantNumber,
    networkpecificNumber,
    subscriberNumber,
    reservedOfAddressIndicator,
    abbreviatedNumber,
    reservedForExtensionAddressIndicator

};

enum enumnumberingPlanIndicator
{
   unknownOfPlanIndicator,
   ISDN_TelephonyNumberingPlan,
   spare0fPlanIndicator,
    dataNumberingPlan,
   telexNumberingPlan,
   spare1OfPlanIndicator,
   landMobileNumberingPlan ,
   spare2OfPlanIndicator,
   nationalNumberingPlan,
   privateNumberingPlan,
   reservedForExtensionPlanIndicator
};


typedef struct __attribute__((packed)) NatureofAddressandNumberingPlanIndicator
{
    enumStruct numberingPlanIndicator;
    enumStruct natureOfAddressIndicator;
    _Bool ext;


}NatureofAddressandNumberingPlanIndicator;

typedef struct __attribute__((packed)) STN_SR
{

   NatureofAddressandNumberingPlanIndicator natureofAddressandNumberingPlanIndicator;
   OCTET_STRING digit;

}STN_SR;
//---------------Sumanth---------------------------




//-------------------------------- 71 : Access Point Name--------------

typedef struct __attribute__((packed)) AccessPointName
{
   OCTET_STRING accessPointName;

}AccessPointName;

//-------------------------72 : Aggregate Maximum Bit Rate---------------

typedef struct __attribute__((packed)) AggregateMaximumBitRate
{

    unsigned long apn_AMBR_ForUplink;
    unsigned long apn_AMBR_ForDownlink;


}AggregateMaximumBitRate;
//-----------------------73 : EPS_BearerID --------

enum enumEPS_BearerIdentity
{

    NoEPSbearerIdentityAssigned=0,
    EPSbearerIdentityAssigned5=5,
    EPSbearerIdentityAssigned6=6,
    EPSbearerIdentityAssigned7=7,
    EPSbearerIdentityAssigned8=8,
    EPSbearerIdentityAssigned9=9,
    EPSbearerIdentityAssigned10=10,
    EPSbearerIdentityAssigned11=11,
    EPSbearerIdentityAssigned12=12,
    EPSbearerIdentityAssigned13=13,
    EPSbearerIdentityAssigned14=14,
    EPSbearerIdentityAssigned15=15
};

typedef struct __attribute__((packed)) EPS_BearerID
{
    unsigned char spare:4;
    enumStruct epsBearerIdentity;
    OCTET_STRING ext;

}EPS_BearerID;

//------------------------74 : IP Address ------------------


typedef struct __attribute__((packed)) IPAddress_GTPV2
{
    _Bool IPV4orIPV6_choice;
           union
           {
               unsigned char ipv4[4];
               unsigned char ipv6[16];
           }IPv4orIPv6;

}IPAddress_GTPV2;
//------------------------75 : MEI  ------------------
//typedef struct __attribute__((packed)) MobileEquipmentIdentity
//{
//    unsigned char       length:4;
//    unsigned char      *MobileEquipmentIdentityValue;

//}MobileEquipmentIdentity;
typedef OCTET_STRING mobileEquipmentIdentity;

//----------------------76 : MSISDN----------------
typedef struct __attribute__((packed)) MSISDN
{
    OCTET_STRING msisdn;
}MSISDN;

//------------------------77 : Indication-------------


typedef struct __attribute__((packed)) Indication
{
    _Bool sgwChangeIndication;
    _Bool idleModeSignallingReductionActivationIndication;
    _Bool idleModeSignallingReductionSupportedIndication;
    _Bool operationIndication;
    _Bool directForwardingIndication;
    _Bool handoverIndication;
    _Bool directTunnelFlag;
    _Bool dualAddressBearerFlag;

    _Bool msValidated;
    _Bool scopeIndication;
    _Bool protocolType;
    _Bool piggybackingSupported;
    _Bool changeReportingSupportIndication;
    _Bool changeF_TEIDsupportIndication;
    _Bool unauthenticatedIMSI;
    _Bool SubscribedQoSChangeIndication;

    _Bool csgChangeReportingSupportIndication;
    _Bool isrActivatedForUE;
    _Bool managementBasedMDTallowedFlag;
    _Bool staticIPv4AddressFlag;
    _Bool staticIPv6AddressFlag;
    _Bool sgwRestorationNeededIndication;
    _Bool propagateBBAI_InformationChange;
    _Bool retrieveLocationIndicationFlag;

    _Bool csToPSSRVCCindication;
    _Bool changeLocationInformationIndication;
    _Bool csfbIndication;
    unsigned char spare:5;

    OCTET_STRING ext;

}Indication;


//------------------------78 : Protocol Configuration Options-------------

typedef struct __attribute__((packed)) ProtocolID
{
    unsigned short protocolIDnumber;
    unsigned char lengthOfprotocolID;
    unsigned char *protocolIDcontents;

}ProtocolID;

typedef struct __attribute__((packed)) ContainerID
{
    unsigned short containerIDnumber;
    unsigned char  lengthOfContainerID;
    unsigned char *containerIDcontents;

}ContainerID;


typedef struct __attribute__((packed)) ProtocolConfigurationOptions_
{


    unsigned char configurationProtocol:3;
    unsigned char spare:4;
    unsigned char ext:1;
    unsigned char numberProtocolConfigurationID;
    ProtocolID  *protocolId;
    ContainerID *containerID;

}ProtocolConfigurationOptions_;
//------------------------79 : PDN Address Allocation-------------
//enum PDNaddressAllocation
//{
//    IPv4=0,
//    IPv6=1,
//    IPv4v6
//};

typedef struct __attribute__((packed)) IPV6
{
    unsigned char prefixLength;
    unsigned char ipv6[16];
}IPV6;

typedef struct __attribute__((packed)) IPV4V6
{    
    IPV6 ipv6;
    unsigned char ipV4[4];
}IPV4V6;

typedef struct __attribute__((packed)) PDN_AddressAllocation
{
    enumStruct pdnType;
    unsigned char spare:5;
    union
    {
        unsigned char ipV4[4];
        IPV6 ipv6;
        IPV4V6 ipv4v6;
    }pdnAddressAndPrefix;
}PDN_AddressAllocation;

// arun-----------------

//..................................80-Bearer Quality of Service..............................
enum enumPreEmptionVulnerabilityAVP
{
    PRE_EMPTION_VULNERABILITY_ENABLED ,
    PRE_EMPTION_VULNERABILITY_DISABLED
};
enum enumPreEmption_CapabilityAVP
{
    PREEMPTION_CAPABILITY_ENABLED,
    PRE_EMPTION_CAPABILITY_DISABLED
};

typedef struct __attribute__((packed)) BearerLevelQualityofService
{

    enumStruct preEmptionVulnerability;
    _Bool spare0;
    unsigned char priorityLevel:4;
    enumStruct preEmptionCapability;
    _Bool spare1;
    unsigned char qCIlabel;
    unsigned long long maximumBitrateForUplink:40;
    unsigned long long maximumBitrateForDownlink:40;
    unsigned long long guaranteedBitrateForUplink:40;
    unsigned long long guaranteedBitRateForDownlink:40;
    OCTET_STRING ext;

}BearerLevelQualityofService;
//.......................................81_Flow Quality of Service...............................
typedef struct __attribute__((packed)) FlowQualityOfService

{
    unsigned char labelOfQCI;
    unsigned long long maximumBitrateForUplink:40;
    unsigned long long maximumBitrateForDownlink:40;
    unsigned long long guaranteedBitrateForUplink:40;
    unsigned long long guaranteedBitRateForDownlink:40;
    OCTET_STRING ext;
}FlowQualityOfService;
//.......................................82-Radio Access Type.......................
enum enumrAT_Type
{
    Reserved0,
    UTRAN,
    GERAN,
    WLAN,
    GAN,
    HSPAEvolution,
    EUTRAN,
    Virtual

};

typedef struct __attribute__((packed)) RadioAccessType
{
    enumStruct rAT_Type;
     OCTET_STRING ext;

}RadioAccessType;
//......................................83-Serving Network.......................................
typedef struct __attribute__((packed)) ServingNetwork
{
    PLMNidentity_G plmnidentity;
    OCTET_STRING  ext;
}ServingNetwork;

////..........................................84-EPS Bearer Level Traffic Flow Template...........................
//typedef struct __attribute__((packed)) DeleteExistingORNoOperationTFT
//{
//    unsigned char packetFilterIdentifier:4;
//    unsigned char spare:4;


//}DeleteExistingORNoOperationTFT;
//enum enumPacketfilterDirection
//{
//   PreRel7TFTfilter,
//    DownlinkONly,
//    UplinkOnly,
//    BiDirectional
//};
//enum enumPacketFilterContents
//{
//    id_IPv4remoteAddressType=16,
//    id_IPv4LocalAddressType=17,
//    id_IPv6RemoteAddressType=32,
//    id_IPv6RemoteAddressOrprefixLengthType=33,
//    id_IPv6LocalAddressOrprefixLengthType=35,
//    id_ProtocolIdentifierOrNextHeaderType=48,
//    id_SingleLocalPortType=64,
//    id_LocalPortRangeType=65,
//    id_SingleRemotePortType=80,
//    id_RemotePortRangeType=81,
//    id_SecurityParameterIndexType=96,
//    id_TypeOfServiceOrTrafficClassType=112,
//    id_FlowLabelType=128
//};
//typedef struct IPv6_RemoteAddressOrprefixLengthType
//{
//    unsigned char                  IPv6RemoteAddress[16];
//    unsigned char                  prefixLength;
//}IPv6_RemoteAddressOrprefixLengthType;
//typedef struct IPv6_LocalAddressOrprefixLengthType
//{
//    unsigned char                  IPv6LocalAddress[16];
//    unsigned char                  prefixLength;
//}IPv6_LocalAddressOrprefixLengthType;

//typedef struct __attribute__((packed)) OtherTFT
//{
//  unsigned char packetFilterIdentifier:4;
//  unsigned char packetfilterDirection:2;//00 - pre Rel-7 TFT filter 01 - downlink only 10 - uplink only 11 - bidirectional
//  unsigned char spare:2;
//  unsigned char packetFilterEvaluationPrecedence;
//  unsigned char lengthOfPacketFilterContents;
//  union
//  {
//      unsigned char                              iPv4remoteAddressType[4];
//      unsigned char                              iPv4LocalAddressType[4];
//      unsigned char                              iPv6remoteAddressType[16];
//      IPv6_RemoteAddressOrprefixLengthType iPv6RemoteAddressOrprefixLengthType;
//      IPv6_LocalAddressOrprefixLengthType  iPv6LocalAddressOrprefixLengthType;
//      unsigned char                              protocolIdentifierOrNextHeaderType;
//      unsigned short                             SingleLocalPortType;
//      unsigned char                              LocalPortRangeType[4];
//      unsigned short                             SingleRemotePortType;
//      unsigned char                              RemotePortRangeType[4];
//      unsigned char                              SecurityParameterIndexType[4];
//      unsigned char                              FlowLabelType[3];
//  }PacketFilterContents;

//}OtherTFT;
//typedef struct PortRange
//{
//    unsigned short lowLimit;
//    unsigned short highLimit;
//}PortRange;
//typedef struct TypeOfService_TrafficClass
//{
//    unsigned char typeOfService_TrafficClass;
//    unsigned char mask;
//}TypeOfService_TrafficClass;

//typedef struct PacketFilterDeleteFromExistingTFT
//{
//    unsigned char packetFilterIdentifier:4;
//    unsigned char spare:4;
//}PacketFilterDeleteFromExistingTFT;
//typedef struct IPv6_AddressAndPrefixLengthType
//{
//    unsigned char                  iPv6[16];
//    unsigned char                  prefixLength;
//}IPv6_AddressAndPrefixLengthType;
//typedef struct IPv6RemoteAddress
//{
//    unsigned char                  iPv6[16];
//    unsigned char                  iPv6mask[16];
//}IPv6RemoteAddress;
//typedef struct IPv4RemoteAddress
//{
//    unsigned char                  iPv4[4];
//    unsigned char                  iPv4mask[4];
//}IPv4RemoteAddress;
//typedef struct IPv4RemoteAddress   IPv4LocalAddress;
//typedef struct PacketFilter
//{
//    unsigned char packetFilterIdentifier;
//    unsigned char packetfilterDirection;//00 - pre Rel-7 TFT filter 01 - downlink only 10 - uplink only 11 - bidirectional
//    unsigned char spare:2;
//    unsigned char packetFilterEvaluationPrecedence;
//    unsigned char lengthOfPacketFilterContents;
//    enumStruct packetFilterComponentTypeIdentifier;
//    union
//    {
//        IPv4RemoteAddress                   iPv4remoteAddress;
//        IPv4LocalAddress                    iPv4LocalAddress;
//        IPv6RemoteAddress                   iPv6remoteAddress;
//        IPv6_AddressAndPrefixLengthType     iPv6RemoteAddressAndPrefixLength;
//        IPv6_AddressAndPrefixLengthType     iPv6LocalAddressAndPrefixLength;
//        /**
//        union
//        {
//            unsigned char                          ipv4ProtocolIdentifier;
//            unsigned char                          ipv6NextHeaderType;
//        };*/
//        unsigned char                              protocolIdentifer_NextHeader;
//        unsigned short                             singleLocalPort;

//        PortRange                           localPortRange;
//        unsigned short                             singleRemotePort;
//        PortRange                           remotePortRange;
//        unsigned char                              securityParameterIndex[4];
//        TypeOfService_TrafficClass          typeOfService_TrafficClass;
//        unsigned char                              flowLabel[3];
//        OCTET_STRING                        octetString;
//    }packetFilterContents;

//}PacketFilter;

//enum enumTFTOperationCode

//{
//    Spare,
//    CreateNewTFT,
//    DeleteExistingTFT,
//    AddPacketFiltersToExistingTFT,
//    ReplacePacketFiltersInExistingTFT,
//    DeletePacketFiltersInExistingTFT,
//    NoTFTOperation,
//    Reserved1
//};
//enum enumEbit
//{
//    parametersListIsNotIncluded,
//    parametersListIsIncluded

//};
///**
//AUTH_ENT_ID SubType values in the range 0-127 are allocated through
//an IETF Consensus action; SubType values between 128-255 are
//reserved for Private Use and are not assigned by IANA.*/
//enum enumAUTH_ENT_ID_SubType
//{
//    IPV4_ADDRESS=1,
//    IPV6_ADDRESS,
//    FQDN,
//    ASCII_DN,
//    UNICODE_DN,
//    URI,
//    KRB_PRINCIPAL,
//    X509_U3_CERT,
//    PGP_CERT
//};

///**
// sessionauthorization attribute types (X-Type)in the range 0-127 are
//allocated through an IETF Consensus action; X-Type values between
//128-255 are reserved for Private Use and are not assigned by IANA.*/
//enum enumXType
//{
//   AUTH_ENT_ID=1, //AUTH_ENT_ID is assigned the value 1.
//   SESSION_ID,//there is no subtype for session id so make it zero in subtype field
//   SOURCE_ADDR,
//   DEST_ADDR,
//   STRAT_TIME,
//   END_TIME,
//   RESOURCES,
//   AUTHENTICATION_DATA
//};
//enum enumParameterIdentifier// in this version of only these three value is possible
//{
//    id_AuthorizationToken=1,//=0x01,
//    id_FlowIdentifier,//=0x02,
//    id_PacketFilterIdentifier_NASPDU//=0x03
//};

//enum enumPType  // 16 bit field contains value 0 to 65535
//{
//    AUTH_SESSION=0x04
//};

//typedef struct SessionAuthorizationAttribute
//{
//    //unsigned short         length;
//   unsigned  u_char          x_Type;
//    unsigned char          subType;
//    OCTET_STRING    xTypeValue;

//}SessionAuthorizationAttribute;
//typedef struct SessionAuthorizationAttributeList
//{
//    unsigned char                              noOfxType;
//    SessionAuthorizationAttribute       *sessionAuthorizationAttribute;

//}SessionAuthorizationAttributeList;

//typedef struct PDFIdentifier
//{
//    //unsigned short                             length;
//    unsigned short                             pType;//AUTH_SESSION
//    SessionAuthorizationAttributeList   sessionAuthorizationAttributeList;

//}PDFIdentifier;
//typedef struct PDFIdentifier  AFSessionIdentifier;

//typedef struct Authorization_Token
//{
//    AFSessionIdentifier  aFSessionIdentifier;
//    PDFIdentifier        pDFIdentifier;

//}Authorization_Token;
//typedef struct FlowIdentifier
//{
//    unsigned char  mediaComponentNumber[2];
//   unsigned char  ipFlowNumber[2];
//}FlowIdentifier;
//typedef struct PacketFilterIdentifier
//{
//    unsigned char  numberOfPacketFilterIdentifier;
//    unsigned char  *value;
//}PacketFilterIdentifier;

//typedef struct ParameterItem
//{
//    enumStruct     parameterIdentifier;
//    unsigned char                lengthOfparameterContents;
//    //ParameterContent     *parameterContent;
//    union
//    {
//        //Authorization_Token      authorizationToken;
//        //we will make separate PDU for making of this
//        OCTET_STRING                authorizationToken;
//        FlowIdentifier              flowIdentifier;
//        PacketFilterIdentifier      packetFilterIdentifier;

//        //Flow_Identifier          *flowIdentifier;
//        //PacketFilter_Identifier  *packetFilterIdentifier;
//    }parameterContent;

//}ParameterItem;

////typedef struct ParametersList
////{

////    unsigned char          noOfParameterItem;
////    ParameterItem   *parameterItem;
////}ParametersList;



//typedef struct TrafficFlowTemplate
//{
//    unsigned char              tFToperationCode:3;
//    unsigned char              parameterPresent:1;
//    unsigned char              numberOfPacketFilters:4;
//    PacketFilterDeleteFromExistingTFT *packetFilterDeleteFromExistingTFT;
//    PacketFilter        *packetFilter;
//   unsigned char              numberOfParameters;
//    ParameterItem       *parameterItem;

//}TrafficFlowTemplate;

//..........................................85-Traffic Aggregate Description....................................
//Reffer TS 24.008 [5], clause 10.5.6.12


//typedef struct __attribute__((packed)) TrafficAggregateDescription
//{
//    unsigned char numberOfPacketFilters:4;
//    _Bool ebit;//bitmap
//    unsigned char tADoperationCode:3;
//    union tAD_OperationCode
// {
//        DeletePacketFilters *deletePacketFilters;
//        ReplacePacketFilters *replacePacketFilters;
//}tAD_OperationCode;
//}TrafficAggregateDescription;

//...............................86 -User Location Information................
typedef struct __attribute__((packed)) CellGlobalIdentifier
{
     PLMNidentity_G plmnid;
     unsigned short locationAreaCode;
     unsigned short cellIdentity;

}CellGlobalIdentifier;
typedef struct __attribute__((packed)) RoutingAreaIdentity
{
     PLMNidentity_G plmnid;
     unsigned short locationAreaCode;
     unsigned short routingAreaCode;
}RoutingAreaIdentity;
typedef struct __attribute__((packed)) ServiceareaIdentifier
{
    PLMNidentity_G plmnid;
    unsigned short locationAreaCode;
     unsigned short serviceAreaCode;
}ServiceareaIdentifier;
typedef struct __attribute__((packed)) TrackingAreaIdentity_GTPV2
{
    PLMNidentity_G plmnid;
     unsigned short trackingAreaCode;

}TrackingAreaIdentity_GTPV2;
typedef struct __attribute__((packed)) EUTRANCellGlobalIdentifier
{
    PLMNidentity_G plmnid;
   unsigned char spare:4;
    unsigned int eUTRANCellIdentifier:28;
}EUTRANCellGlobalIdentifier;
typedef struct __attribute__((packed)) LocationAreaIdentifier
{
    PLMNidentity_G plmnid;
   unsigned short locationAreaCode;

}LocationAreaIdentifier;

typedef struct __attribute__((packed)) UserLocationInformation
{
  _Bool cellGlobalIdentificationPresence ;
  _Bool  serviceAreaIdentificationPresence;
  _Bool  routingAreaIdentificationPresence ;
  _Bool trackingAreaIdentityPresence;
  _Bool eUTRANCellGlobalIdentificationPresence;
  _Bool locationAreaIdentificationPresence;
  unsigned char spare:2;

        CellGlobalIdentifier cellglobalIdentification;
        ServiceareaIdentifier serviceareaIdentification;
        RoutingAreaIdentity routingareaIdentification;
        TrackingAreaIdentity_GTPV2 trackingareaIdentity;
        EUTRANCellGlobalIdentifier eUTRANcellGlobalIdentification;
        LocationAreaIdentifier locationareaIdentification;

  OCTET_STRING ext;

}UserLocationInformation;
//...................................88-TemporaryMobileSubscriberIdentities....................

typedef struct __attribute__((packed)) TemporaryMobileSubscriberIdentities
{
    unsigned char temporaryMobileSubscriberIdentities[4];
}TemporaryMobileSubscriberIdentities;
//-------------------------------------89-Global CN-Id........................................
typedef struct __attribute__((packed)) GlobalCN_Id
{
   PLMNidentity_G plmnid;
   unsigned short CN_ID:13;
}GlobalCN_Id;




//sumanth----------------
//----------- 90: S103 PDN Data Forwarding Info (S103PDF)---------

typedef struct __attribute__((packed)) S103_PDN_DataForwardingInfo
{
//    unsigned char  hsgwAddressLength;
//    unsigned char  *hsgwAddressForForwarding;
    enumStruct choose;
           union
           {
              unsigned char ipv4[4];
               unsigned char ipv6[16];
           }ipv4oripv6;
    unsigned char  greKey[4];
    unsigned char  epsBearerID_Number;
    unsigned char  spare:4;
    unsigned char  *epsBearerID;

}S103_PDN_DataForwardingInfo;

//---------------------- 91:  S1-U Data Forwarding (S1UDF)--------------------

typedef struct __attribute__((packed)) S1_U_DataForwarding
{
    unsigned char  epsBearerID:4;
    unsigned char  spare:4;
    enumStruct choose;
           union
           {
               unsigned char ipv4[4];
               unsigned char ipv6[16];
           }ipv4oripv6;
    unsigned char   servingGW_S1uTEID[4];

}S1_U_DataForwarding;


//------------------------92 : Delay Value-------------

typedef struct __attribute__((packed)) DelayValue
{
    unsigned char delayValue;
    OCTET_STRING ext;
}DelayValue;


//------------------------94 : Charging ID------------

typedef struct __attribute__((packed)) ChargingID
{
    unsigned char chargingIDvalue[4];
    OCTET_STRING ext;
}ChargingID;

//----------------------95: Charging Characteristics

typedef struct __attribute__((packed)) ChargingCharacteristics
{
    unsigned short ChargingCharacteristicsvalue;
    OCTET_STRING ext;
}ChargingCharacteristics;


//----------------------96: Trace Information-------------
typedef struct __attribute__((packed)) IPV4
{
    unsigned long ipv4;
}IPV4;
typedef struct  __attribute__((packed)) MSCServer_Trace
{
_Bool mOandMTcalls;
_Bool mOandMTSMS;
_Bool lUIMSIattachIMSIdetach;
_Bool handovers;
_Bool supplementaryService;
unsigned short spare:10;
}MSCServer_Trace;
typedef struct  __attribute__((packed)) MGW_Trace
{
 bool context;
 unsigned char spare:7;
}MGW_Trace;
typedef struct  __attribute__((packed)) SGSN_Trace
{
_Bool pDPcontext;
_Bool mOandMTSMS;
_Bool RAUGPRSattachGPRSdetach;
_Bool mBMSContext;
unsigned char spare:4;
}SGSN_Trace;
typedef struct  __attribute__((packed)) GGSN_Trace
{
_Bool pDPcontext;
_Bool mBMSContext;
unsigned char spare:6;
}GGSN_Trace;
typedef struct  __attribute__((packed)) MME_Trace
{
_Bool uEinitiatedPDNconnectivityrequest;
_Bool servicerequests;
_Bool initialPDNAttachTrackingAreaUpdateDetach;
_Bool uEIntiatedPDNConncetion;
_Bool bearerActivationModificationDeletion;
_Bool Handover;
unsigned char spare:2;
}MME_Trace;
typedef struct  __attribute__((packed)) PGWSGW_Trace
{
_Bool sGWPDNConnectioncreation;
_Bool sGWPDNConnectionTermination;
_Bool sGWBearerActivationModificationDeletion;
_Bool sGWSpare0;
_Bool pGWPDNConnectioncreation;
_Bool pGWPDNConnectionTermination;
_Bool pGWBearerActivationModificationDeletion;
_Bool pGWSpare0;
}PGWSGW_Trace;
typedef struct  __attribute__((packed))TriggeringEvents
{
    MSCServer_Trace mSCServer;
    MGW_Trace mGW;
    SGSN_Trace sGSN;
    GGSN_Trace gGSN;
    MME_Trace mME;
    PGWSGW_Trace pGWSGW;
}TriggeringEvents;
typedef struct __attribute__((packed)) ListOfNEtypes
{
_Bool mSC_S;
_Bool mGW ;
_Bool sGSN;
_Bool gGSN;
_Bool rNC;
_Bool bM_SC;
_Bool mME;
_Bool sGW;
_Bool pDNGW;
_Bool eNB;
unsigned char spare:6;
}ListOfNEtypes;
/**
enum enumTraceDepth
{
    Minimum,
    Medium,
    Maximum,
    MinimumWithoutVendorSpecificExtension,
    MediumWithoutVendorSpecificExtension,
    MaximumWithoutVendorSpecificExtension
};*/
typedef struct __attribute__((packed))MSCServerInterfacelist
{
_Bool interfaceA;
_Bool interfaceLU;
_Bool interfaceMc;
_Bool interfaceMAP_G;
_Bool interfaceMAP_B;
_Bool interfaceMAP_E;
_Bool interfaceMAP_F;
_Bool interfaceCAP;
_Bool interfaceMAP_D;
_Bool interfaceMAP_C;
unsigned char spare:6;
}MSCServerInterfacelist;
typedef struct __attribute__((packed))SGSNInterfacelist
{
_Bool interfaceGb;
_Bool interfaceLU;
_Bool interfaceGn;
_Bool interfaceMAP_Gr;
_Bool interfaceMAP_Gd;
_Bool interfaceMAP_Gf;
_Bool interfaceGs;
_Bool interfaceGe;
_Bool interfaceS6d;
_Bool interfaceS4;
_Bool interfaceS3;
_Bool interfaceS13;
unsigned char spare:4;
}SGSNInterfacelist;
typedef struct __attribute__((packed))MGWInterfacelist
{
_Bool interfaceMc;
_Bool interfaceNb_UP;
_Bool interfaceLU_UP;
unsigned char spare:5;
}MGWInterfacelist;
typedef struct __attribute__((packed))GGSNInterfacelist
{
_Bool interfaceGn;
_Bool interfaceGi;
_Bool interfaceGmb;
unsigned char spare:5;
}GGSNInterfacelist;
typedef struct __attribute__((packed))RNCInterfacelist
{
_Bool interfaceLU;
_Bool interfaceLUr;
_Bool interfaceLUb;
_Bool interfaceUU;
unsigned char spare:4;
}RNCInterfacelist;
typedef struct __attribute__((packed))BM_SCInterfacelist
{
_Bool interfaceGmb;
unsigned char spare:7;
}BM_SCInterfacelist;
typedef struct __attribute__((packed))MMEInterfacelist
{
_Bool interfaceS1_MME;
_Bool interfaceS3;
_Bool interfaceS6a;
_Bool interfaceS10;
_Bool interfaceS11;
_Bool interfaceS13;
_Bool char spare:2;
}MMEInterfacelist;
typedef struct __attribute__((packed))SGWInterfacelist
{
_Bool interfaceS4;
_Bool interfaceS5;
_Bool interfaceS8b;
_Bool interfaceS11;
_Bool interfaceGxc;
unsigned char spare:3;
}SGWInterfacelist;
typedef struct __attribute__((packed))PDNGWInterfacelist
{
    _Bool interfaceS2a;
    _Bool interfaceS2b;
   _Bool interfaceS2c;
    _Bool interfaceS5;
    _Bool interfaceS6b;
    _Bool interfaceGx;
    _Bool interfaceS8b;
    _Bool interfaceSGi;
}PDNGWInterfacelist;
typedef struct __attribute__((packed))ENBInterfacelist
{
    _Bool interfaceS1_MME;
    _Bool interfaceX2;
    _Bool interfaceUU;
    u_char spare:5;
}ENBInterfacelist;
typedef struct __attribute__((packed))HSSInterfacelist
{
    _Bool interfaceMAP_C;
  _Bool interfaceMAP_D;
    _Bool interfaceMAP_Gc;
    _Bool interfaceMAP_Gr;
    _Bool interfaceCx;
    _Bool interfaceS6d;
    _Bool interfaceS6a;
   _Bool interfaceSh;
}HSSInterfacelist;
typedef struct __attribute__((packed))EIRInterfacelist
{
    _Bool interfaceMAP_F;
    _Bool interfaceS13;
    _Bool interfaceS13c;
   _Bool interfaceMAP_Gf;
    unsigned char spare:4;
}EIRInterfacelist;
typedef struct __attribute__((packed))ListOfInterfaces
{
MSCServerInterfacelist mSCServerInterfacelist;
SGSNInterfacelist sGSNInterfacelist;
MGWInterfacelist mGWInterfacelist;
GGSNInterfacelist gGSNInterfacelist;
RNCInterfacelist rNCInterfacelist;
BM_SCInterfacelist bM_SCInterfacelist;
MMEInterfacelist mMEInterfacelist;
SGWInterfacelist sGWInterfacelist;
PDNGWInterfacelist pDNGWInterfacelist;
ENBInterfacelist eNBInterfacelist;
HSSInterfacelist hSSInterfacelist;
EIRInterfacelist eIRInterfacelist;
}ListOfInterfaces;
typedef struct __attribute__((packed)) IpAddressOfTraceCollectionEntity
{
    enumStruct ipaddressType;
    union
    {
        unsigned char ipV4[4];
        IPV6 ipv6;
     }ipadress;
}IpAddressOfTraceCollectionEntity;

typedef struct __attribute__((packed)) TraceInformation
{
    PLMNidentity_G plmnID;
   unsignedchar     traceID[3];
    TriggeringEvents   triggeringEvents;
    ListOfNEtypes     listOfNEtypes;
    unsigned char      sessionTraceDepth;
    ListOfInterfaces listOfInterfaces;
    IpAddressOfTraceCollectionEntity ipAddressOfTraceCollectionEntity;
}TraceInformation;


//----------------------97: Bearer Flags-------------

typedef struct __attribute__((packed)) BearerFlags
{
    _Bool prohibitPayloadCompression;
    _Bool voiceBearer;
    _Bool vSRVCCindicator;
    _Bool activityStatusIndicator;
    unsigned char spare:4;
    OCTET_STRING ext;

}BearerFlags;

//----------------------98: Resrved-----------
//----------------------99: PDN Type-------------

typedef struct __attribute__((packed)) PDNType_gtpv2
{
    enumStruct PDNType;
    unsigned char spare:5;
    union
    {
       unsigned char ipV4[4];
        IPV6 ipv6;
        IPV4V6 ipv4v6;
    }PDN_choice;
    OCTET_STRING ext;

}PDNType_gtpv2;



//raghu---------------------

//................................100 -Procedure Transaction ID................................
typedef struct __attribute__((packed)) ProcedureTransactionID
{
 unsigned char procedureTransactionID_Value;
   OCTET_STRING ext;
}ProcedureTransactionID;

// ...............................103-MM Context For GSM Key And Triplets...............................................
typedef struct __attribute__((packed)) AuthenticationTriplet
{
    unsigned char rAND[16] ;
    unsigned char sRES[4];
    unsigned char kc[8];
}AuthenticationTriplet;
enum enumno_DRXtimer
{
    nonon_DRXmodeAfterTransferState,
    max1secNon_DRXmodeAfterTransferState,
    maxsec2Non_DRXmodeAfterTransferState,
    max4secNon_DRXmodeAfterTransferState,
    max8secNon_DRXmodeAfterTransferState,
    max16secNon_DRXmodeAfterTransferState,
    max32secNon_DRXmodeAfterTransferState,
    max64secNon_DRXmodeAfterTransferState
};
enum enumIuAndS1modeSpecific
{
   CN_SpecificDRXcycleLengthCoefficientNotSpecified,
   CNSpecificDRXcycleLengthCoefficient6andT=6,
   CNSpecificDRXcycleLengthCoefficient7andT=7,
    CNSpecificDRXcycleLengthCoefficient8andT=8,
    CNSpecificDRXcycleLengthCoefficient9andT=9

};

enum enumSPLIT_PG_CYCLE_CODE
{
    t_704=0,
    t_71=65,
    t_72=66,
    t_74=67,
    t_75=68,
    t_77=69,
    t_79=70,
    t_80=71,
    t_83=72,
    t_86=73,
    t_88=74,
    t_90=75,
    t_92=76,
    t_96=77,
    t_101=76,
    t_103=77,
    t_107=78,
    t_112=79,
    t_116=80,
    t_118=81,
    t_128=82,
    t_141=83,
    t_144=84,
    t_150=85,
    t_160=86,
    t_171=87,
    t_176=88,
    t_192=89,
    t_214=90,
    t_224=91,
    t_235=92,
    t_256=93,
    t_288=94,
    t_320=96,
    t_352=97
};

enum enumSPLITonCCCH
{
    SplitPgCycleOnCCCHisNotSupported,
    SplitPgCycleOnCCCHisSupported
};

typedef struct __attribute__((packed)) DRXparameter
{

   unsigned char sPLITPGCYCLECODE;
   enumStruct non_DRXtimer;
   _Bool sPLIT_onCCCH;
   enumStruct cNSpecificDRXcyclelengthandS1mode;

}DRXparameter;
//SHIFTED TO COMMONSTRUCTURES
/**
typedef struct __attribute__((packed)) UENetworkCapability
{
    //EPS Encryption Algorithm
        _Bool eEA0;
        _Bool eEA1_128;
        _Bool eEA2_128;
        _Bool eEA3_128;
        _Bool eEA4;
        _Bool eEA5;
        _Bool eEA6;
        _Bool eEA7;
        //EPS Integrity Algorithm
        _Bool eIA0;
        _Bool eIA1_128;
        _Bool eIA2_128;
        _Bool eIA3_128;
        _Bool eIA4;
        _Bool eIA5;
        _Bool eIA6;
        _Bool eIA7;
        //UMTS Encryption Algorithm
        _Bool uEA0;
        _Bool uEA1;
        _Bool uEA2;
        _Bool uEA3;
        _Bool uEA4;
        _Bool uEA5;
        _Bool uEA6;
        _Bool uEA7;
        //UCS2 support(UCS2)
        _Bool uCS2;
        //UMTS Integrity Algorithm
        _Bool uIA1;
        _Bool uIA2;
        _Bool uIA3;
        _Bool uIA4;
        _Bool uIA5;
        _Bool uIA6;
        _Bool uIA7;
        //Notification Procedure Capability
        _Bool notification;
        //1xSRVCC capability
        _Bool onexSRVCC;
        //Location service (LCS)
        _Bool locationServices;
        //LTE Positioning Protocol
        _Bool ltePositioningProtocol;
        //Access class control for CSFB(ACC-CSFB)
        _Bool eNodeBBasedAccessClassControl;
        //H.245 after SRVCC Handover capability
        _Bool h245AfterSRVCC;

}UENetworkCapability;
typedef struct __attribute__((packed)) MSnetworkcapability
{
    _Bool    GEA_1;
    _Bool    smcapabilitiesviadedicatedchannels;
    _Bool    smcapabilitiesviaGPRSchannels;
    _Bool    UCS2support;
    unsigned char  SSScreeningIndicator:2;
    _Bool    soLSACapability;
    _Bool    revisionlevelindicator;
    _Bool    pfcfeaturemode;
    _Bool    GEA_2;
    _Bool    GEA_3;
    _Bool    GEA_4;
    _Bool    GEA_5;
    _Bool    GEA_6;
    _Bool    GEA_7;
    _Bool    lcsVAcapability;
    _Bool    PSinterRATHOtoUTRANIumodecapability;
    _Bool    PSinterRATHOfromGERANtoEUTRAN_S1modecapability;//Added newly to the roopash code....
    _Bool    eMMCombinedProceduresCapability;//Added newly to the roopash code....
    _Bool    ISRsupport;
    _Bool    srvcctoGERAN_UTRANcapability;
    _Bool    ePCcapability;
    _Bool    nFcapability;
    _Bool    gERANnetworkSharingCapability;

}MSnetworkcapability;
*/
typedef struct __attribute__((packed)) VoiceDomainPreferencAandUEsUsageSetting
{

 unsigned char voicedomainPreferenceForEUTRAN:2;
 _Bool uEsUsageSettings;
 unsigned char spare:5;
}VoiceDomainPreferencAandUEsUsageSetting;
enum enumSecurityModeValues
{
    GSMKeyandTriplets,
    UMTSKeyUsedCipherandQuintuplets,
    GSMKeyUsedCipherandQuintuplets,
    UMTSKeyandQuintuplets,
    EPSSecurityContextandQuadruplets,
    UMTSKeyQuadrupletsandQuintuplets
};
enum enumUsedNASCipherValues
{
    Nociphering0,
    EEA1_128,
    EEA2_128,
    EEA3_128,
    EEA4,
    EEA5,
    EEA6,
    EEA7

};
enum enumCipherValues
 {
    Nociphering1,
    GEA_1,
    GEA_2,
    GEA_3,
    GEA_4,
    GEA_5,
    GEA_6,
    GEA_7
};
enum enumNASIntegrityProtectionAlgorithmValues
{
    Nointegrityprotection,
    EIA1_128,
    EIA2_128,
    EIA3_128,
    EIA4,
    EIA5,
    EIA6,
    EIA7


};
enum enumUEsUsageSetting
{
    VoiceCentric,
    DataCentric
};
enum VoiceDomainPreference
{
    CSVoiceOnly,
    IMS_PS_VoiceOnly,
    CS_VoicePreferred,
    IMS_PSVoicePreferred
};


typedef struct __attribute__ ((packed)) VoiceDomainPreferencUEsUsageSetting
{
    enumStruct UEsUsageSetting;
    enumStruct voiceDomainPreference;

}VoiceDomainPreferencUEsUsageSetting;

typedef struct __attribute__((packed)) MMContextForGSM_KeyAndTriplets
{
    unsigned char cKSN:3;
    _Bool dRX_Indicator;
    _Bool spare0;
    enumStruct securityMode;
    _Bool sAMBRI;// for UE AMBR
    _Bool uAMBRI;// Uplink/downlink Used UE AMBR
    char spare1:3;
   unsigned char numberOfTriplet:3;
   enumStruct usedCipher;
   unsigned char spare2:5;
   unsigned char kc[8];
   AuthenticationTriplet *authenticationTriplet;
   DRXparameter dRXparameter;
   unsigned char uplinkSubscribedUEAMBR[4];
   unsigned char downlinkSubscribedUEAMBR[4];
   unsigned char uplinkUsedUEAMBR[4];
   unsigned char downlinkUsedUEAMBR[4];
  unsigned char lengthOfUE_NetworkCapability;
   UENetworkCapability uENetworkCapability;
   unsigned char lengthofMSNetworkCapability;
   MSnetworkcapability mSnetworkcapability;
   unsigned char lengthofMobileEquipmentIdentity;
   unsigned char *mobileEquipmentIdentity;
   _Bool uTRAN_NotAllowed;
   _Bool gERAN_NotAllowed;
   _Bool gAN_NotAllowed;
   _Bool i_HSPA_EvolutionNotAllowed;
   _Bool e_UTRANNotAllowed;
   _Bool hO_To_Non_3GPP_AccessNotAllowed;
   unsigned char spare3:2;
   unsigned char lengthofVoiceDomainPreferenceandUEsUsageSetting;
   VoiceDomainPreferencUEsUsageSetting voiceDomainPreferencAandUEsUsageSetting;
   OCTET_STRING ext;
}MMContextForGSM_KeyAndTriplets;

//.....................................104-MMContext for UMTS Key, Used Cipher and Quintuplets

typedef struct __attribute__((packed)) AuthenticationQuintuplet
{
    unsigned char rAND[16];
  //unsigned char xRESLength;
  //unsigned char *xRES;
    OCTET_STRING xRES;

  unsigned char cK[16];
  unsigned char iK[16];

  OCTET_STRING aUTN;

}AuthenticationQuintuplet;
enum  HigherBitratesThan16MbpsFlag
{
    Allowed,
    NotAllowed
};

typedef struct __attribute__((packed)) MMContextforUMTSKeyUsedCipherandQuintuplets
{
    unsigned char cKSN:3;
    _Bool dRX_Indicator;
    _Bool spare0;
    enumStruct securityMode;
    _Bool sAMBRI;// for UE AMBR
    _Bool uAMBRI;// Uplink/downlink Used UE AMBR
    unsigned char spare1:3;
    unsigned char numberofQuintuplets:3;
    enumStruct usedCipher;
   unsigned short spare2:5;
    unsigned char cK[16];
    unsigned char iK[16];
    AuthenticationQuintuplet *authenticationQuintuplet;
    DRXparameter dRXparameter;
    unsigned char uplinkSubscribedUE_AMBR[4];
    unsigned char downlinkSubscribedUEAMBR[4];
    unsigned char uplinkUsedUEAMBR[4];
    unsigned char downlinkUsedUEAMBR[4];
    unsigned char lengthOfUENetworkCapability;
    UENetworkCapability uENetworkCapability;
    unsigned char lengthOfmSnetworkcapability;
    MSnetworkcapability mSnetworkcapability;
    unsigned char lengthofMobileEquipmentIdentity;
    unsigned char *mobileEquipmentIdentity;
    _Bool uTRAN_NotAllowed;
    _Bool gERAN_NotAllowed;
    _Bool gAN_NotAllowed;
    _Bool i_HSPA_EvolutionNotAllowed;
    _Bool e_UTRANNotAllowed;
    _Bool hO_To_Non_3GPP_AccessNotAllowed;
    unsigned char spare3:2;
    unsigned char lengthofVoiceDomainPreferenceandUEsUsageSetting;
    VoiceDomainPreferencUEsUsageSetting voiceDomainPreferencAandUEsUsageSetting;
    unsigned char lengthOfHigherbitratesThan16MbpsFlag;
    enumStruct higherBitratesThan16MbpsFlag;
    OCTET_STRING ext;

}MMContextforUMTSKeyUsedCipherandQuintuplets;
//.........................105--MMContext for GSM Key, Used Cipher and Quintuplets..............................
typedef struct __attribute__((packed)) MMContextforGSM_KeyUsedCipherandQuintuplets
{
    unsigned char cKSN:3;
    _Bool dRX_Indicator;
    _Bool spare0;
    enumStruct securityMode;
    _Bool sAMBRI;// for UE AMBR
    _Bool uAMBRI;// Uplink/downlink Used UE AMBR
    unsigned char spare1:3;
    unsigned char numberOfQuintuplets:3;
    enumStruct usedCipher;
    unsigned char spare2:5;
    unsigned char kc[8];
    AuthenticationQuintuplet *authenticationQuintuplet;
    DRXparameter dRXparameter;
   unsigned char uplinkSubscribedUEAMBR[4];
    unsigned char downlinkSubscribedUEAMBR[4];
    unsigned char uplinkUsedUEAMBR[4];
    unsigned char downlinkUsedUEAMBR[4];
   unsigned char lengthOfUE_NetworkCapability;
    UENetworkCapability uENetworkCapability;
   unsigned char lengthofMSNetworkCapability;
    MSnetworkcapability mSnetworkcapability;
   unsigned char lengthofMobileEquipmentIdentity:4;
    unsigned char *mobileEquipmentIdentity;
    _Bool uTRAN_NotAllowed;
    _Bool gERAN_NotAllowed;
    _Bool gAN_NotAllowed;
    _Bool i_HSPA_EvolutionNotAllowed;
    _Bool e_UTRANNotAllowed;
    _Bool hO_To_Non_3GPP_AccessNotAllowed;
    unsigned char spare3:2;
   unsigned char lengthofVoiceDomainPreferenceandUEsUsageSetting;
    VoiceDomainPreferencUEsUsageSetting voiceDomainPreferencAandUEsUsageSetting;
    unsigned char lengthOfHigherbitratesThan16MbpsFlag;
   enumStruct higherBitratesThan16MbpsFlag;
    OCTET_STRING ext;
}MMContextforGSM_KeyUsedCipherandQuintuplets;
