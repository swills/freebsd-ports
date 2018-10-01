# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-cucumber-core/Makefile 480678 2018-09-25 16:09:12Z sunpoet $

PORTNAME=	cucumber-core
PORTVERSION=	3.2.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Core library for the Cucumber BDD app

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-cucumber-tag_expressions>=1.1.0:devel/rubygem-cucumber-tag_expressions \
		rubygem-gherkin>=5.0:textproc/rubygem-gherkin

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
