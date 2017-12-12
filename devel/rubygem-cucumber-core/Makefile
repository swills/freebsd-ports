# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-cucumber-core/Makefile 455459 2017-12-03 20:36:37Z sunpoet $

PORTNAME=	cucumber-core
PORTVERSION=	3.1.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Core library for the Cucumber BDD app

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-cucumber-tag_expressions>=1.1.0:devel/rubygem-cucumber-tag_expressions \
		rubygem-gherkin>=5.0.0:textproc/rubygem-gherkin

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
