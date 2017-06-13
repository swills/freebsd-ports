# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/dns/py-tldextract/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	tldextract
PORTVERSION=	1.7.5
CATEGORIES=	dns python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Separate the TLD from the registered domain and subdomains of a URL

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}idna>=2.0:dns/py-idna

USES=	python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
