# Created by: Oddbjorn Steffensen <oddbjorn@tricknology.org>
# $FreeBSD: head/www/py-pyweblib/Makefile 448723 2017-08-25 17:56:42Z bsam $

PORTNAME=	pyweblib
PORTVERSION=	1.3.13
CATEGORIES=	www
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

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
