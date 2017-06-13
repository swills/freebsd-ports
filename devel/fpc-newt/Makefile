# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/devel/fpc-newt/Makefile 412346 2016-04-01 14:00:51Z mat $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-newt

MAINTAINER=	freebsd-fpc@FreeBSD.org
COMMENT=	Free Pascal interface to newt library

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	NEWT
NEWT_DESC=	Install newt library
OPTIONS_DEFAULT=	NEWT

NEWT_LIB_DEPENDS=	libnewt.so:devel/newt

.include "${MASTERDIR}/Makefile"
