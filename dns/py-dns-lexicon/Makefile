# Created by: Goran Mekić <meka@tilda.center>
# $FreeBSD: head/dns/py-dns-lexicon/Makefile 465230 2018-03-21 19:04:29Z sunpoet $

PORTNAME=	dns-lexicon
DISTVERSION=	2.1.24
CATEGORIES=	dns python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	meka@tilda.center
COMMENT=	Manipulate DNS records on various DNS providers in a standardized way

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}future>0:devel/py-future@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tldextract>0:dns/py-tldextract@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist concurrent
NO_ARCH=	yes

.include <bsd.port.mk>
