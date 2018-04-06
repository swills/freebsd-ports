# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/net/fpc-ldap/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	net lang
PKGNAMESUFFIX=	-ldap

COMMENT=	Free Pascal interface to OpenLDAP

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	OPENLDAP
OPENLDAP_DESC=	Install OpenLDAP libraries
OPTIONS_DEFAULT=	OPENLDAP

OPENLDAP_USE=	OPENLDAP=yes

.include "${MASTERDIR}/Makefile"
