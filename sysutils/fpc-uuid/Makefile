# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/sysutils/fpc-uuid/Makefile 403082 2015-12-05 23:29:36Z marino $

CATEGORIES=	sysutils lang
PKGNAMESUFFIX=	-uuid

MAINTAINER=	freebsd-fpc@FreeBSD.org
COMMENT=	Free Pascal uuid unit

USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
