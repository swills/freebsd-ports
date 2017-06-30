# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/textproc/py-mwparserfromhell/Makefile 444660 2017-06-29 18:23:00Z ultima $

PORTNAME=	mwparserfromhell
PORTVERSION=	0.5
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@rawbw.com
COMMENT=	Parser for MediaWiki wikicode

LICENSE=	MIT

USES=		python
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/mwparserfromhell/parser/_tokenizer.so

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
