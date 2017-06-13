# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/graphics/fpc-hermes/Makefile 412346 2016-04-01 14:00:51Z mat $

CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-hermes

MAINTAINER=	freebsd-fpc@FreeBSD.org
COMMENT=	Free Pascal hermes unit

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	HERMES
HERMES_DESC=	Install hermes graphics library
OPTIONS_DEFAULT=	HERMES

HERMES_LIB_DEPENDS=	libHermes.so:graphics/Hermes

.include "${MASTERDIR}/Makefile"
