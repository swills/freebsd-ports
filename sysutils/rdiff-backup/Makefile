# Created by: Gerhard Häring <gh@ghaering.de>
# $FreeBSD$

PORTNAME=	rdiff-backup
DISTVERSIONPREFIX=	v
DISTVERSION=	2.0.0
PORTEPOCH=	1
CATEGORIES=	sysutils
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	uzsolt@uzsolt.hu
COMMENT=	Local/remote mirroring+incremental backup

LICENSE=	GPLv2

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pip>0:devel/py-pip@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
LIB_DEPENDS=	librsync.so:net/librsync

USES=		python
USE_GITHUB=	yes
USE_LDCONFIG=	yes
USE_PYTHON=	distutils
CPPFLAGS+=	-I${LOCALBASE}/include

CONFLICTS=	rdiff-backup-devel-[0-9]* rdiff-backup-1.0*

PORTSCOUT=	limitw:1,even

MAN1S=		rdiff-backup.1 rdiff-backup-statistics.1
DOCS=		CHANGELOG README COPYING FAQ.html

OPTIONS_DEFINE=	DOCS

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/rdiff_backup/_librsync.so
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/rdiff_backup/C.so

.include <bsd.port.mk>
