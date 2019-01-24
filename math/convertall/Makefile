# Created by: Michael Johnson <ahze@ahze.net>
# $FreeBSD: head/math/convertall/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	convertall
PORTVERSION=	0.7.5
PORTREVISION=	2
CATEGORIES=	math
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION}

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Another unit converter

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/doc/LICENSE

USES=		pyqt:5 python:3.4+ shebangfix
USE_PYQT=	core gui widgets sip

SHEBANG_FILES=	source/convertall.py

CONFIGURE_ARGS=	-p ${PREFIX} -d ${DOCSDIR} -i ${DATADIR}/icons -b ${STAGEDIR}
NO_ARCH=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/ConvertAll

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_CONFIGURE_OFF=	-s

do-install:
	(cd ${WRKSRC} && ${PYTHON_CMD} install.py ${CONFIGURE_ARGS})
	(cd ${STAGEDIR}${PREFIX} && \
		${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py \
		-d ${DATADIR} -f ${DATADIR_REL})
	(cd ${STAGEDIR}${DOCSDIR} && ${RM} INSTALL LICENSE)

.include <bsd.port.mk>
