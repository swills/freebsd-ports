# Created by: Oddbjorn Steffensen <oddbjorn@tricknology.org>
# $FreeBSD: head/www/pyweblib/Makefile 421480 2016-09-07 08:19:41Z bsam $

PORTNAME=	pyweblib
PORTVERSION=	1.3.12
CATEGORIES=	www
MASTER_SITES=	http://www.stroeder.com/pylib/

MAINTAINER=	bsam@FreeBSD.org
COMMENT=	Yet another web programming framework for Python

LICENSE=	GPLv2

USES=		python
USE_PYTHON=	autoplist distutils

PORTDOCS=	pyweblib.forms.html pyweblib.helper.html \
		pyweblib.html pyweblib.httphelper.html \
		pyweblib.session.html pyweblib.sslenv.html
EXAMPLES=	*.py

OPTIONS_DEFINE=	DOCS

PORTEXAMPLES=	*

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/cgi-bin ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/cgi-bin/${EXAMPLES} ${STAGEDIR}${EXAMPLESDIR}/cgi-bin
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/htdocs/pydoc/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
