/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef computeHostModel_TYPES_H
#define computeHostModel_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




struct ResourceJobManager {
  enum type {
    FORK = 0,
    PBS = 1,
    UGE = 2,
    SLURM = 3
  };
};

extern const std::map<int, const char*> _ResourceJobManager_VALUES_TO_NAMES;

struct JobSubmissionProtocol {
  enum type {
    SSH = 0,
    GSISSH = 1,
    GRAM = 2,
    UNICORE = 3
  };
};

extern const std::map<int, const char*> _JobSubmissionProtocol_VALUES_TO_NAMES;

struct DataMovementProtocol {
  enum type {
    SCP = 0,
    SFTP = 1,
    GridFTP = 2,
    UNICORE_STORAGE_SERVICE = 3
  };
};

extern const std::map<int, const char*> _DataMovementProtocol_VALUES_TO_NAMES;

struct SecurityProtocol {
  enum type {
    USERNAME_PASSWORD = 0,
    SSH_KEYS = 1,
    GSI = 2,
    KERBEROS = 3,
    OAUTH = 4
  };
};

extern const std::map<int, const char*> _SecurityProtocol_VALUES_TO_NAMES;

typedef struct _SCPDataMovement__isset {
  _SCPDataMovement__isset() : sshPort(true) {}
  bool sshPort;
} _SCPDataMovement__isset;

class SCPDataMovement {
 public:

  static const char* ascii_fingerprint; // = "FEB6B2CD28861B4EED855CACA1FEF2CB";
  static const uint8_t binary_fingerprint[16]; // = {0xFE,0xB6,0xB2,0xCD,0x28,0x86,0x1B,0x4E,0xED,0x85,0x5C,0xAC,0xA1,0xFE,0xF2,0xCB};

  SCPDataMovement() : dataMovementDataID("DO_NOT_SET_AT_CLIENTS"), securityProtocol((SecurityProtocol::type)0), sshPort(22) {
  }

  virtual ~SCPDataMovement() throw() {}

  std::string dataMovementDataID;
  SecurityProtocol::type securityProtocol;
  int32_t sshPort;

  _SCPDataMovement__isset __isset;

  void __set_dataMovementDataID(const std::string& val) {
    dataMovementDataID = val;
  }

  void __set_securityProtocol(const SecurityProtocol::type val) {
    securityProtocol = val;
  }

  void __set_sshPort(const int32_t val) {
    sshPort = val;
    __isset.sshPort = true;
  }

  bool operator == (const SCPDataMovement & rhs) const
  {
    if (!(dataMovementDataID == rhs.dataMovementDataID))
      return false;
    if (!(securityProtocol == rhs.securityProtocol))
      return false;
    if (__isset.sshPort != rhs.__isset.sshPort)
      return false;
    else if (__isset.sshPort && !(sshPort == rhs.sshPort))
      return false;
    return true;
  }
  bool operator != (const SCPDataMovement &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SCPDataMovement & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(SCPDataMovement &a, SCPDataMovement &b);


class GridFTPDataMovement {
 public:

  static const char* ascii_fingerprint; // = "790EE8B1D56A3B9B76C41DD063726E75";
  static const uint8_t binary_fingerprint[16]; // = {0x79,0x0E,0xE8,0xB1,0xD5,0x6A,0x3B,0x9B,0x76,0xC4,0x1D,0xD0,0x63,0x72,0x6E,0x75};

  GridFTPDataMovement() : dataMovementDataID("DO_NOT_SET_AT_CLIENTS"), securityProtocol((SecurityProtocol::type)0) {
  }

  virtual ~GridFTPDataMovement() throw() {}

  std::string dataMovementDataID;
  SecurityProtocol::type securityProtocol;
  std::vector<std::string>  gridFTPEndPoint;

  void __set_dataMovementDataID(const std::string& val) {
    dataMovementDataID = val;
  }

  void __set_securityProtocol(const SecurityProtocol::type val) {
    securityProtocol = val;
  }

  void __set_gridFTPEndPoint(const std::vector<std::string> & val) {
    gridFTPEndPoint = val;
  }

  bool operator == (const GridFTPDataMovement & rhs) const
  {
    if (!(dataMovementDataID == rhs.dataMovementDataID))
      return false;
    if (!(securityProtocol == rhs.securityProtocol))
      return false;
    if (!(gridFTPEndPoint == rhs.gridFTPEndPoint))
      return false;
    return true;
  }
  bool operator != (const GridFTPDataMovement &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GridFTPDataMovement & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(GridFTPDataMovement &a, GridFTPDataMovement &b);

typedef struct _SSHJobSubmission__isset {
  _SSHJobSubmission__isset() : sshPort(true) {}
  bool sshPort;
} _SSHJobSubmission__isset;

class SSHJobSubmission {
 public:

  static const char* ascii_fingerprint; // = "FEB6B2CD28861B4EED855CACA1FEF2CB";
  static const uint8_t binary_fingerprint[16]; // = {0xFE,0xB6,0xB2,0xCD,0x28,0x86,0x1B,0x4E,0xED,0x85,0x5C,0xAC,0xA1,0xFE,0xF2,0xCB};

  SSHJobSubmission() : jobSubmissionDataID("DO_NOT_SET_AT_CLIENTS"), resourceJobManager((ResourceJobManager::type)0), sshPort(22) {
  }

  virtual ~SSHJobSubmission() throw() {}

  std::string jobSubmissionDataID;
  ResourceJobManager::type resourceJobManager;
  int32_t sshPort;

  _SSHJobSubmission__isset __isset;

  void __set_jobSubmissionDataID(const std::string& val) {
    jobSubmissionDataID = val;
  }

  void __set_resourceJobManager(const ResourceJobManager::type val) {
    resourceJobManager = val;
  }

  void __set_sshPort(const int32_t val) {
    sshPort = val;
    __isset.sshPort = true;
  }

  bool operator == (const SSHJobSubmission & rhs) const
  {
    if (!(jobSubmissionDataID == rhs.jobSubmissionDataID))
      return false;
    if (!(resourceJobManager == rhs.resourceJobManager))
      return false;
    if (__isset.sshPort != rhs.__isset.sshPort)
      return false;
    else if (__isset.sshPort && !(sshPort == rhs.sshPort))
      return false;
    return true;
  }
  bool operator != (const SSHJobSubmission &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SSHJobSubmission & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(SSHJobSubmission &a, SSHJobSubmission &b);

typedef struct _GlobusJobSubmission__isset {
  _GlobusJobSubmission__isset() : globusGateKeeperEndPoint(false) {}
  bool globusGateKeeperEndPoint;
} _GlobusJobSubmission__isset;

class GlobusJobSubmission {
 public:

  static const char* ascii_fingerprint; // = "DF4253F78D7B543C16FA461660D38A03";
  static const uint8_t binary_fingerprint[16]; // = {0xDF,0x42,0x53,0xF7,0x8D,0x7B,0x54,0x3C,0x16,0xFA,0x46,0x16,0x60,0xD3,0x8A,0x03};

  GlobusJobSubmission() : jobSubmissionDataID("DO_NOT_SET_AT_CLIENTS"), securityProtocol((SecurityProtocol::type)0), resourceJobManager((ResourceJobManager::type)0) {
  }

  virtual ~GlobusJobSubmission() throw() {}

  std::string jobSubmissionDataID;
  SecurityProtocol::type securityProtocol;
  ResourceJobManager::type resourceJobManager;
  std::vector<std::string>  globusGateKeeperEndPoint;

  _GlobusJobSubmission__isset __isset;

  void __set_jobSubmissionDataID(const std::string& val) {
    jobSubmissionDataID = val;
  }

  void __set_securityProtocol(const SecurityProtocol::type val) {
    securityProtocol = val;
  }

  void __set_resourceJobManager(const ResourceJobManager::type val) {
    resourceJobManager = val;
  }

  void __set_globusGateKeeperEndPoint(const std::vector<std::string> & val) {
    globusGateKeeperEndPoint = val;
    __isset.globusGateKeeperEndPoint = true;
  }

  bool operator == (const GlobusJobSubmission & rhs) const
  {
    if (!(jobSubmissionDataID == rhs.jobSubmissionDataID))
      return false;
    if (!(securityProtocol == rhs.securityProtocol))
      return false;
    if (!(resourceJobManager == rhs.resourceJobManager))
      return false;
    if (__isset.globusGateKeeperEndPoint != rhs.__isset.globusGateKeeperEndPoint)
      return false;
    else if (__isset.globusGateKeeperEndPoint && !(globusGateKeeperEndPoint == rhs.globusGateKeeperEndPoint))
      return false;
    return true;
  }
  bool operator != (const GlobusJobSubmission &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GlobusJobSubmission & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(GlobusJobSubmission &a, GlobusJobSubmission &b);

typedef struct _GSISSHJobSubmission__isset {
  _GSISSHJobSubmission__isset() : sshPort(true), exports(false), preJobCommands(false), postJobCommands(false), installedPath(false), monitorMode(false) {}
  bool sshPort;
  bool exports;
  bool preJobCommands;
  bool postJobCommands;
  bool installedPath;
  bool monitorMode;
} _GSISSHJobSubmission__isset;

class GSISSHJobSubmission {
 public:

  static const char* ascii_fingerprint; // = "6969A7F145C4403B2F9081A498E933FD";
  static const uint8_t binary_fingerprint[16]; // = {0x69,0x69,0xA7,0xF1,0x45,0xC4,0x40,0x3B,0x2F,0x90,0x81,0xA4,0x98,0xE9,0x33,0xFD};

  GSISSHJobSubmission() : jobSubmissionDataID("DO_NOT_SET_AT_CLIENTS"), resourceJobManager((ResourceJobManager::type)0), sshPort(22), installedPath(), monitorMode() {
  }

  virtual ~GSISSHJobSubmission() throw() {}

  std::string jobSubmissionDataID;
  ResourceJobManager::type resourceJobManager;
  int32_t sshPort;
  std::set<std::string>  exports;
  std::vector<std::string>  preJobCommands;
  std::vector<std::string>  postJobCommands;
  std::string installedPath;
  std::string monitorMode;

  _GSISSHJobSubmission__isset __isset;

  void __set_jobSubmissionDataID(const std::string& val) {
    jobSubmissionDataID = val;
  }

  void __set_resourceJobManager(const ResourceJobManager::type val) {
    resourceJobManager = val;
  }

  void __set_sshPort(const int32_t val) {
    sshPort = val;
    __isset.sshPort = true;
  }

  void __set_exports(const std::set<std::string> & val) {
    exports = val;
    __isset.exports = true;
  }

  void __set_preJobCommands(const std::vector<std::string> & val) {
    preJobCommands = val;
    __isset.preJobCommands = true;
  }

  void __set_postJobCommands(const std::vector<std::string> & val) {
    postJobCommands = val;
    __isset.postJobCommands = true;
  }

  void __set_installedPath(const std::string& val) {
    installedPath = val;
    __isset.installedPath = true;
  }

  void __set_monitorMode(const std::string& val) {
    monitorMode = val;
    __isset.monitorMode = true;
  }

  bool operator == (const GSISSHJobSubmission & rhs) const
  {
    if (!(jobSubmissionDataID == rhs.jobSubmissionDataID))
      return false;
    if (!(resourceJobManager == rhs.resourceJobManager))
      return false;
    if (__isset.sshPort != rhs.__isset.sshPort)
      return false;
    else if (__isset.sshPort && !(sshPort == rhs.sshPort))
      return false;
    if (__isset.exports != rhs.__isset.exports)
      return false;
    else if (__isset.exports && !(exports == rhs.exports))
      return false;
    if (__isset.preJobCommands != rhs.__isset.preJobCommands)
      return false;
    else if (__isset.preJobCommands && !(preJobCommands == rhs.preJobCommands))
      return false;
    if (__isset.postJobCommands != rhs.__isset.postJobCommands)
      return false;
    else if (__isset.postJobCommands && !(postJobCommands == rhs.postJobCommands))
      return false;
    if (__isset.installedPath != rhs.__isset.installedPath)
      return false;
    else if (__isset.installedPath && !(installedPath == rhs.installedPath))
      return false;
    if (__isset.monitorMode != rhs.__isset.monitorMode)
      return false;
    else if (__isset.monitorMode && !(monitorMode == rhs.monitorMode))
      return false;
    return true;
  }
  bool operator != (const GSISSHJobSubmission &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GSISSHJobSubmission & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(GSISSHJobSubmission &a, GSISSHJobSubmission &b);

typedef struct _ComputeResourceDescription__isset {
  _ComputeResourceDescription__isset() : hostAliases(false), ipAddresses(false), resourceDescription(false), preferredJobSubmissionProtocol(false) {}
  bool hostAliases;
  bool ipAddresses;
  bool resourceDescription;
  bool preferredJobSubmissionProtocol;
} _ComputeResourceDescription__isset;

class ComputeResourceDescription {
 public:

  static const char* ascii_fingerprint; // = "A31E9EF4FF0C9ADE9027FD5C59A96555";
  static const uint8_t binary_fingerprint[16]; // = {0xA3,0x1E,0x9E,0xF4,0xFF,0x0C,0x9A,0xDE,0x90,0x27,0xFD,0x5C,0x59,0xA9,0x65,0x55};

  ComputeResourceDescription() : isEmpty(false), resourceId("DO_NOT_SET_AT_CLIENTS"), hostName(), resourceDescription(), preferredJobSubmissionProtocol() {
  }

  virtual ~ComputeResourceDescription() throw() {}

  bool isEmpty;
  std::string resourceId;
  std::string hostName;
  std::set<std::string>  hostAliases;
  std::set<std::string>  ipAddresses;
  std::string resourceDescription;
  std::string preferredJobSubmissionProtocol;
  std::map<std::string, JobSubmissionProtocol::type>  jobSubmissionProtocols;
  std::map<std::string, DataMovementProtocol::type>  dataMovementProtocols;

  _ComputeResourceDescription__isset __isset;

  void __set_isEmpty(const bool val) {
    isEmpty = val;
  }

  void __set_resourceId(const std::string& val) {
    resourceId = val;
  }

  void __set_hostName(const std::string& val) {
    hostName = val;
  }

  void __set_hostAliases(const std::set<std::string> & val) {
    hostAliases = val;
    __isset.hostAliases = true;
  }

  void __set_ipAddresses(const std::set<std::string> & val) {
    ipAddresses = val;
    __isset.ipAddresses = true;
  }

  void __set_resourceDescription(const std::string& val) {
    resourceDescription = val;
    __isset.resourceDescription = true;
  }

  void __set_preferredJobSubmissionProtocol(const std::string& val) {
    preferredJobSubmissionProtocol = val;
    __isset.preferredJobSubmissionProtocol = true;
  }

  void __set_jobSubmissionProtocols(const std::map<std::string, JobSubmissionProtocol::type> & val) {
    jobSubmissionProtocols = val;
  }

  void __set_dataMovementProtocols(const std::map<std::string, DataMovementProtocol::type> & val) {
    dataMovementProtocols = val;
  }

  bool operator == (const ComputeResourceDescription & rhs) const
  {
    if (!(isEmpty == rhs.isEmpty))
      return false;
    if (!(resourceId == rhs.resourceId))
      return false;
    if (!(hostName == rhs.hostName))
      return false;
    if (__isset.hostAliases != rhs.__isset.hostAliases)
      return false;
    else if (__isset.hostAliases && !(hostAliases == rhs.hostAliases))
      return false;
    if (__isset.ipAddresses != rhs.__isset.ipAddresses)
      return false;
    else if (__isset.ipAddresses && !(ipAddresses == rhs.ipAddresses))
      return false;
    if (__isset.resourceDescription != rhs.__isset.resourceDescription)
      return false;
    else if (__isset.resourceDescription && !(resourceDescription == rhs.resourceDescription))
      return false;
    if (__isset.preferredJobSubmissionProtocol != rhs.__isset.preferredJobSubmissionProtocol)
      return false;
    else if (__isset.preferredJobSubmissionProtocol && !(preferredJobSubmissionProtocol == rhs.preferredJobSubmissionProtocol))
      return false;
    if (!(jobSubmissionProtocols == rhs.jobSubmissionProtocols))
      return false;
    if (!(dataMovementProtocols == rhs.dataMovementProtocols))
      return false;
    return true;
  }
  bool operator != (const ComputeResourceDescription &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ComputeResourceDescription & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ComputeResourceDescription &a, ComputeResourceDescription &b);



#endif
