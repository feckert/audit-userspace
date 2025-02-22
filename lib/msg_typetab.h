/* msg_typetab.h --
 * Copyright 2005-07,2009-18 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      Steve Grubb <sgrubb@redhat.com>
 */

/*
 * This table is arranged from lowest number to highest number. The
 * items that are commented out are for completeness. The audit 
 * daemon filters these and they never show up in the logs, therefore
 * they are not needed for reporting. Or they have been deprecated for
 * a long time.
 */
//_S(AUDIT_GET,                      "GET"                           )
//_S(AUDIT_SET,                      "SET"                           )
//_S(AUDIT_LIST,                     "LIST"                          )
//_S(AUDIT_ADD,                      "ADD"                           )
//_S(AUDIT_DEL,                      "DEL"                           )
_S(AUDIT_USER,                       "USER"                          )
_S(AUDIT_LOGIN,                      "LOGIN"                         )
//_S(AUDIT_SIGNAL_INFO,              "SIGNAL_INFO"                   )
//_S(AUDIT_ADD_RULE,                 "ADD_RULE"                      )
//_S(AUDIT_DEL_RULE,                 "DEL_RULE"                      )
//_S(AUDIT_LIST_RULES,                 "LIST_RULES"                    )
//_S(AUDIT_TRIM,                     "TRIM"                          )
//_S(AUDIT_MAKE_EQUIV,               "MAKE_EQUIV"                    )
//_S(AUDIT_TTY_GET,                    "TTY_GET"                       )
//_S(AUDIT_TTY_SET,                    "TTY_SET"                       )
//_S(AUDIT_SET_FEATURE,                "SET_FEATURE"                   )
//_S(AUDIT_GET_FEATURE,                "GET_FEATURE"                   )
_S(AUDIT_USER_AUTH,                  "USER_AUTH"                     )
_S(AUDIT_USER_ACCT,                  "USER_ACCT"                     )
_S(AUDIT_USER_MGMT,                  "USER_MGMT"                     )
_S(AUDIT_CRED_ACQ,                   "CRED_ACQ"                      )
_S(AUDIT_CRED_DISP,                  "CRED_DISP"                     )
_S(AUDIT_USER_START,                 "USER_START"                    )
_S(AUDIT_USER_END,                   "USER_END"                      )
_S(AUDIT_USER_AVC,                   "USER_AVC"                      )
_S(AUDIT_USER_CHAUTHTOK,             "USER_CHAUTHTOK"                )
_S(AUDIT_USER_ERR,                   "USER_ERR"                      )
_S(AUDIT_CRED_REFR,                  "CRED_REFR"                     )
_S(AUDIT_USYS_CONFIG,                "USYS_CONFIG"                   )
_S(AUDIT_USER_LOGIN,                 "USER_LOGIN"                    )
_S(AUDIT_USER_LOGOUT,                "USER_LOGOUT"                   )
_S(AUDIT_ADD_USER,                   "ADD_USER"                      )
_S(AUDIT_DEL_USER,                   "DEL_USER"                      )
_S(AUDIT_ADD_GROUP,                  "ADD_GROUP"                     )
_S(AUDIT_DEL_GROUP,                  "DEL_GROUP"                     )
_S(AUDIT_DAC_CHECK,                  "DAC_CHECK"                     )
_S(AUDIT_CHGRP_ID,                   "CHGRP_ID"                      )
_S(AUDIT_TEST,                       "TEST"                          )
_S(AUDIT_TRUSTED_APP,                "TRUSTED_APP"                   )
_S(AUDIT_USER_SELINUX_ERR,           "USER_SELINUX_ERR"              )
_S(AUDIT_USER_CMD,                   "USER_CMD"                      )
_S(AUDIT_USER_TTY,                   "USER_TTY"                      )
_S(AUDIT_CHUSER_ID,                  "CHUSER_ID"                     )
_S(AUDIT_GRP_AUTH,                   "GRP_AUTH"                      )
_S(AUDIT_MAC_CHECK,                  "MAC_CHECK"                     )
_S(AUDIT_ACCT_LOCK,                  "ACCT_LOCK"                     )
_S(AUDIT_ACCT_UNLOCK,                "ACCT_UNLOCK"                   )
_S(AUDIT_USER_DEVICE,                "USER_DEVICE"                   )
_S(AUDIT_SOFTWARE_UPDATE,            "SOFTWARE_UPDATE"               )
_S(AUDIT_SYSTEM_BOOT,                "SYSTEM_BOOT"                   )
_S(AUDIT_SYSTEM_SHUTDOWN,            "SYSTEM_SHUTDOWN"               )
_S(AUDIT_SYSTEM_RUNLEVEL,            "SYSTEM_RUNLEVEL"               )
_S(AUDIT_SERVICE_START,              "SERVICE_START"                 )
_S(AUDIT_SERVICE_STOP,               "SERVICE_STOP"                  )
_S(AUDIT_GRP_MGMT,                   "GRP_MGMT"                      )
_S(AUDIT_GRP_CHAUTHTOK,              "GRP_CHAUTHTOK"                 )
_S(AUDIT_DAEMON_START,               "DAEMON_START"                  )
_S(AUDIT_DAEMON_END,                 "DAEMON_END"                    )
_S(AUDIT_DAEMON_ABORT,               "DAEMON_ABORT"                  )
_S(AUDIT_DAEMON_CONFIG,              "DAEMON_CONFIG"                 )
//_S(AUDIT_DAEMON_RECONFIG,          "DAEMON_RECONFIG"               )
_S(AUDIT_DAEMON_ROTATE,              "DAEMON_ROTATE"                 )
_S(AUDIT_DAEMON_RESUME,              "DAEMON_RESUME"                 )
_S(AUDIT_DAEMON_ACCEPT,              "DAEMON_ACCEPT"                 )
_S(AUDIT_DAEMON_CLOSE,               "DAEMON_CLOSE"                  )
_S(AUDIT_DAEMON_ERR,                 "DAEMON_ERR"                    )
_S(AUDIT_SYSCALL,                    "SYSCALL"                       )
//_S(AUDIT_FS_WATCH,                 "FS_WATCH"                      )
_S(AUDIT_PATH,                       "PATH"                          )
_S(AUDIT_IPC,                        "IPC"                           )
_S(AUDIT_SOCKETCALL,                 "SOCKETCALL"                    )
_S(AUDIT_CONFIG_CHANGE,              "CONFIG_CHANGE"                 )
_S(AUDIT_SOCKADDR,                   "SOCKADDR"                      )
_S(AUDIT_CWD,                        "CWD"                           )
//_S(AUDIT_FS_INODE,                 "FS_INODE"                      )
_S(AUDIT_EXECVE,                     "EXECVE"                        )
_S(AUDIT_IPC_SET_PERM,               "IPC_SET_PERM"                  )
_S(AUDIT_MQ_OPEN,                    "MQ_OPEN"                       )
_S(AUDIT_MQ_SENDRECV,                "MQ_SENDRECV"                   )
_S(AUDIT_MQ_NOTIFY,                  "MQ_NOTIFY"                     )
_S(AUDIT_MQ_GETSETATTR,              "MQ_GETSETATTR"                 )
_S(AUDIT_KERNEL_OTHER,               "KERNEL_OTHER"                  )
_S(AUDIT_FD_PAIR,                    "FD_PAIR"                       )
_S(AUDIT_OBJ_PID,                    "OBJ_PID"                       )
_S(AUDIT_TTY,                        "TTY"                           )
_S(AUDIT_EOE,                        "EOE"                           )
_S(AUDIT_BPRM_FCAPS,                 "BPRM_FCAPS"                    )
_S(AUDIT_CAPSET,                     "CAPSET"                        )
_S(AUDIT_MMAP,                       "MMAP"                          )
_S(AUDIT_NETFILTER_PKT,              "NETFILTER_PKT"                 )
_S(AUDIT_NETFILTER_CFG,              "NETFILTER_CFG"                 )
_S(AUDIT_SECCOMP,                    "SECCOMP"                       )
_S(AUDIT_PROCTITLE,                  "PROCTITLE"                     )
_S(AUDIT_FEATURE_CHANGE,             "FEATURE_CHANGE"                )
_S(AUDIT_KERN_MODULE,                "KERN_MODULE"                   )
_S(AUDIT_FANOTIFY,                   "FANOTIFY"                      )
_S(AUDIT_TIME_INJOFFSET,             "TIME_INJOFFSET"                )
_S(AUDIT_TIME_ADJNTPVAL,             "TIME_ADJNTPVAL"                )
_S(AUDIT_BPF,                        "BPF"                           )
_S(AUDIT_EVENT_LISTENER,             "EVENT_LISTENER"                )
_S(AUDIT_AVC,                        "AVC"                           )
_S(AUDIT_SELINUX_ERR,                "SELINUX_ERR"                   )
_S(AUDIT_AVC_PATH,                   "AVC_PATH"                      )
_S(AUDIT_MAC_POLICY_LOAD,            "MAC_POLICY_LOAD"               )
_S(AUDIT_MAC_STATUS,                 "MAC_STATUS"                    )
_S(AUDIT_MAC_CONFIG_CHANGE,          "MAC_CONFIG_CHANGE"             )
_S(AUDIT_MAC_UNLBL_ALLOW,            "MAC_UNLBL_ALLOW"               )       
_S(AUDIT_MAC_CIPSOV4_ADD,            "MAC_CIPSOV4_ADD"               )
_S(AUDIT_MAC_CIPSOV4_DEL,            "MAC_CIPSOV4_DEL"               )
_S(AUDIT_MAC_MAP_ADD,                "MAC_MAP_ADD"                   )
_S(AUDIT_MAC_MAP_DEL,                "MAC_MAP_DEL"                   )
_S(AUDIT_MAC_IPSEC_ADDSA,            "MAC_IPSEC_ADDSA"               )
_S(AUDIT_MAC_IPSEC_DELSA,            "MAC_IPSEC_DELSA"               )
_S(AUDIT_MAC_IPSEC_ADDSPD,           "MAC_IPSEC_ADDSPD"              )
_S(AUDIT_MAC_IPSEC_DELSPD,           "MAC_IPSEC_DELSPD"              )
_S(AUDIT_MAC_IPSEC_EVENT,            "MAC_IPSEC_EVENT"               )
_S(AUDIT_MAC_UNLBL_STCADD,           "MAC_UNLBL_STCADD"              )
_S(AUDIT_MAC_UNLBL_STCDEL,           "MAC_UNLBL_STCDEL"              )
_S(AUDIT_MAC_CALIPSO_ADD,            "MAC_CALIPSO_ADD"               )
_S(AUDIT_MAC_CALIPSO_DEL,            "MAC_CALIPSO_DEL"               )
_S(AUDIT_ANOM_PROMISCUOUS,           "ANOM_PROMISCUOUS"              )
_S(AUDIT_ANOM_ABEND,                 "ANOM_ABEND"                    )
_S(AUDIT_ANOM_LINK,                  "ANOM_LINK"                     )
_S(AUDIT_ANOM_CREAT,                 "ANOM_CREAT"                    )
_S(AUDIT_INTEGRITY_DATA,             "INTEGRITY_DATA"                )
_S(AUDIT_INTEGRITY_METADATA,         "INTEGRITY_METADATA"            )
_S(AUDIT_INTEGRITY_STATUS,           "INTEGRITY_STATUS"              )
_S(AUDIT_INTEGRITY_HASH,             "INTEGRITY_HASH"                )
_S(AUDIT_INTEGRITY_PCR,              "INTEGRITY_PCR"                 )
_S(AUDIT_INTEGRITY_RULE,             "INTEGRITY_RULE"                )
_S(AUDIT_INTEGRITY_EVM_XATTR,        "INTEGRITY_EVM_XATTR"           )
_S(AUDIT_INTEGRITY_POLICY_RULE,      "INTEGRITY_POLICY_RULE"         )

#ifdef WITH_APPARMOR
_S(AUDIT_AA,                         "APPARMOR"                      )
_S(AUDIT_APPARMOR_AUDIT,             "APPARMOR_AUDIT"                )
_S(AUDIT_APPARMOR_ALLOWED,           "APPARMOR_ALLOWED"              )
_S(AUDIT_APPARMOR_DENIED,            "APPARMOR_DENIED"               )
_S(AUDIT_APPARMOR_HINT,              "APPARMOR_HINT"                 )
_S(AUDIT_APPARMOR_STATUS,            "APPARMOR_STATUS"               )
_S(AUDIT_APPARMOR_ERROR,             "APPARMOR_ERROR"                )
_S(AUDIT_APPARMOR_KILL,              "APPARMOR_KILL"                 )
#endif
_S(AUDIT_KERNEL,                     "KERNEL"                        )
_S(AUDIT_ANOM_LOGIN_FAILURES,        "ANOM_LOGIN_FAILURES"           )
_S(AUDIT_ANOM_LOGIN_TIME,            "ANOM_LOGIN_TIME"               )
_S(AUDIT_ANOM_LOGIN_SESSIONS,        "ANOM_LOGIN_SESSIONS"           )
_S(AUDIT_ANOM_LOGIN_ACCT,            "ANOM_LOGIN_ACCT"               )
_S(AUDIT_ANOM_LOGIN_LOCATION,        "ANOM_LOGIN_LOCATION"           )
_S(AUDIT_ANOM_MAX_DAC,               "ANOM_MAX_DAC"                  )
_S(AUDIT_ANOM_MAX_MAC,               "ANOM_MAX_MAC"                  )
_S(AUDIT_ANOM_AMTU_FAIL,             "ANOM_AMTU_FAIL"                )
_S(AUDIT_ANOM_RBAC_FAIL,             "ANOM_RBAC_FAIL"                )
_S(AUDIT_ANOM_RBAC_INTEGRITY_FAIL,   "ANOM_RBAC_INTEGRITY_FAIL"      )
_S(AUDIT_ANOM_CRYPTO_FAIL,           "ANOM_CRYPTO_FAIL"              )
_S(AUDIT_ANOM_ACCESS_FS,             "ANOM_ACCESS_FS"                )
_S(AUDIT_ANOM_EXEC,                  "ANOM_EXEC"                     )
_S(AUDIT_ANOM_MK_EXEC,               "ANOM_MK_EXEC"                  )
_S(AUDIT_ANOM_ADD_ACCT,              "ANOM_ADD_ACCT"                 )
_S(AUDIT_ANOM_DEL_ACCT,              "ANOM_DEL_ACCT"                 )
_S(AUDIT_ANOM_MOD_ACCT,              "ANOM_MOD_ACCT"                 )
_S(AUDIT_ANOM_ROOT_TRANS,            "ANOM_ROOT_TRANS"               )
_S(AUDIT_ANOM_LOGIN_SERVICE,         "ANOM_LOGIN_SERVICE"            )
_S(AUDIT_RESP_ANOMALY,               "RESP_ANOMALY"                  )
_S(AUDIT_RESP_ALERT,                 "RESP_ALERT"                    )
_S(AUDIT_RESP_KILL_PROC,             "RESP_KILL_PROC"                )
_S(AUDIT_RESP_TERM_ACCESS,           "RESP_TERM_ACCESS"              )
_S(AUDIT_RESP_ACCT_REMOTE,           "RESP_ACCT_REMOTE"              )
_S(AUDIT_RESP_ACCT_LOCK_TIMED,       "RESP_ACCT_LOCK_TIMED"          )
_S(AUDIT_RESP_ACCT_UNLOCK_TIMED,     "RESP_ACCT_UNLOCK_TIMED"        )
_S(AUDIT_RESP_ACCT_LOCK,             "RESP_ACCT_LOCK"                )
_S(AUDIT_RESP_TERM_LOCK,             "RESP_TERM_LOCK"                )
_S(AUDIT_RESP_SEBOOL,                "RESP_SEBOOL"                   )
_S(AUDIT_RESP_EXEC,                  "RESP_EXEC"                     )
_S(AUDIT_RESP_SINGLE,                "RESP_SINGLE"                   )
_S(AUDIT_RESP_HALT,                  "RESP_HALT"                     )
_S(AUDIT_RESP_ORIGIN_BLOCK,          "RESP_ORIGIN_BLOCK"             )
_S(AUDIT_RESP_ORIGIN_BLOCK_TIMED,    "RESP_ORIGIN_BLOCK_TIMED"       )
_S(AUDIT_USER_ROLE_CHANGE,           "USER_ROLE_CHANGE"              )
_S(AUDIT_ROLE_ASSIGN,                "ROLE_ASSIGN"                   )
_S(AUDIT_ROLE_REMOVE,                "ROLE_REMOVE"                   )
_S(AUDIT_LABEL_OVERRIDE,             "LABEL_OVERRIDE"                )
_S(AUDIT_LABEL_LEVEL_CHANGE,         "LABEL_LEVEL_CHANGE"            )
_S(AUDIT_USER_LABELED_EXPORT,        "USER_LABELED_EXPORT"           )
_S(AUDIT_USER_UNLABELED_EXPORT,      "USER_UNLABELED_EXPORT"         )
_S(AUDIT_DEV_ALLOC,                  "DEV_ALLOC"                     )
_S(AUDIT_DEV_DEALLOC,                "DEV_DEALLOC"                   )
_S(AUDIT_FS_RELABEL,                 "FS_RELABEL"                    )
_S(AUDIT_USER_MAC_POLICY_LOAD,       "USER_MAC_POLICY_LOAD"          )
_S(AUDIT_ROLE_MODIFY,                "ROLE_MODIFY"                   )
_S(AUDIT_USER_MAC_CONFIG_CHANGE,     "USER_MAC_CONFIG_CHANGE"        )
_S(AUDIT_USER_MAC_STATUS,            "USER_MAC_STATUS"               )
_S(AUDIT_CRYPTO_TEST_USER,           "CRYPTO_TEST_USER"              )
_S(AUDIT_CRYPTO_PARAM_CHANGE_USER,   "CRYPTO_PARAM_CHANGE_USER"      )
_S(AUDIT_CRYPTO_LOGIN,               "CRYPTO_LOGIN"                  )
_S(AUDIT_CRYPTO_LOGOUT,              "CRYPTO_LOGOUT"                 )
_S(AUDIT_CRYPTO_KEY_USER,            "CRYPTO_KEY_USER"               )
_S(AUDIT_CRYPTO_FAILURE_USER,        "CRYPTO_FAILURE_USER"           )
_S(AUDIT_CRYPTO_REPLAY_USER,         "CRYPTO_REPLAY_USER"            )
_S(AUDIT_CRYPTO_SESSION,             "CRYPTO_SESSION"                )
_S(AUDIT_CRYPTO_IKE_SA,              "CRYPTO_IKE_SA"                 )
_S(AUDIT_CRYPTO_IPSEC_SA,            "CRYPTO_IPSEC_SA"               )
_S(AUDIT_VIRT_CONTROL,               "VIRT_CONTROL"                  )
_S(AUDIT_VIRT_RESOURCE,              "VIRT_RESOURCE"                 )
_S(AUDIT_VIRT_MACHINE_ID,            "VIRT_MACHINE_ID"               )
_S(AUDIT_VIRT_INTEGRITY_CHECK,       "VIRT_INTEGRITY_CHECK"          )
_S(AUDIT_VIRT_CREATE,                "VIRT_CREATE"                   )
_S(AUDIT_VIRT_DESTROY,               "VIRT_DESTROY"                  )
_S(AUDIT_VIRT_MIGRATE_IN,            "VIRT_MIGRATE_IN"               )
_S(AUDIT_VIRT_MIGRATE_OUT,           "VIRT_MIGRATE_OUT"              )

