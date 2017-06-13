# Created by: Mike Meyer <mwm@mired.org>
# $FreeBSD: head/x11-wm/plwm/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	plwm
PORTVERSION=	2.6a
CATEGORIES=	x11-wm python
MASTER_SITES=	SF
DISTNAME=	${PORTNAME:tu}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Window manager construction kit

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}xlib>0:x11-toolkits/py-xlib
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}xlib>0:x11-toolkits/py-xlib

NO_ARCH=	yes

USES=		python
USE_PYTHON=	distutils autoplist

PORTDOCS=	*
PORTEXAMPLES=	*

OPTIONS_DEFINE=	DOCS EXAMPLES

post-patch:
	@${REINPLACE_CMD} -e \
		's|whrandom|random|g' ${WRKSRC}/plwm/inspect.py
	@${REINPLACE_CMD} -e \
		's|$$Id|coding: utf-8 |g' ${WRKSRC}/plwm/mw_apm.py

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/doc && ${INSTALL_DATA} *.pdf \
		${STAGEDIR}${DOCSDIR})

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/examples && ${INSTALL_DATA} *.examplewm *.py \
		${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
