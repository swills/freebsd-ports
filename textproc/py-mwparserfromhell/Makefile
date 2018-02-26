# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/textproc/py-mwparserfromhell/Makefile 462887 2018-02-25 00:40:37Z yuri $

PORTNAME=	mwparserfromhell
PORTVERSION=	0.5
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Parser for MediaWiki wikicode

LICENSE=	MIT

USES=		python
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/mwparserfromhell/parser/_tokenizer.so

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
