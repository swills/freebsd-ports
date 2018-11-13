# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/textproc/py-mwparserfromhell/Makefile 484123 2018-11-04 18:56:04Z yuri $

PORTNAME=	mwparserfromhell
DISTVERSION=	0.5.2
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Parser for MediaWiki wikicode

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/mwparserfromhell/parser/_tokenizer.so

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
