# $FreeBSD: head/security/rubygem-rack-oauth2/Makefile 468589 2018-04-28 20:11:12Z sunpoet $

PORTNAME=	rack-oauth2
PORTVERSION=	1.9.2
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	OAuth 2.0 Server & Client Library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-activesupport4>=0:devel/rubygem-activesupport4 \
		rubygem-attr_required>=0:devel/rubygem-attr_required \
		rubygem-httpclient>=0:www/rubygem-httpclient \
		rubygem-json-jwt>=1.9.0:www/rubygem-json-jwt \
		rubygem-rack>=0:www/rubygem-rack

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
