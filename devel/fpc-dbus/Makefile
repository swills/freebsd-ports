# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/devel/fpc-dbus/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-dbus

COMMENT=	Free Pascal interface to dbus library

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	DBUS
DBUS_DESC=	Install dbus library
OPTIONS_DEFAULT=	DBUS

DBUS_LIB_DEPENDS=	libdbus-1.so:devel/dbus

.include "${MASTERDIR}/Makefile"
