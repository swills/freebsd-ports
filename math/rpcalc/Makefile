# Created by: Edwin Groothuis <edwin@mavetju.org>
# $FreeBSD: head/math/rpcalc/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	rpcalc
PORTVERSION=	0.7.1
CATEGORIES=	math
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION}

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Simple RPN calculator

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/doc/LICENSE

USES=		pyqt:4 python:3.3+
USE_PYQT=	core gui

CONFIGURE_ARGS=	-p ${PREFIX} -d ${DOCSDIR} -i ${DATADIR}/icons -b ${STAGEDIR}
NO_ARCH=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/rpCalc

DESKTOP_ENTRIES="rpCalc" \
		"RPN Calculator" \
		"${DATADIR}/icons/calc_lg.png" \
		"${PORTNAME}" \
		"Qt;Utility;Calculator;" \
		false

do-install:
	(cd ${WRKSRC} && ${PYTHON_CMD} install.py ${CONFIGURE_ARGS})
	(cd ${STAGEDIR}${PREFIX} && \
		${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py \
		-d ${DATADIR} -f ${DATADIR_REL})
	(cd ${STAGEDIR}${DOCSDIR} && ${RM} INSTALL LICENSE)

.include <bsd.port.mk>
