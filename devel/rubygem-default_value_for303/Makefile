# $FreeBSD$

PORTNAME=	default_value_for
PORTVERSION=	3.0.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	303

MAINTAINER=	idefix@fechner.net
COMMENT=	Define default values for ActiveRecord models in a declarative manner

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.TXT

RUN_DEPENDS=	rubygem-activerecord4>=4.1.4:databases/rubygem-activerecord4

PORTSCOUT=	limit:^3\.0\.3
CONFLICTS_INSTALL=	rubygem-default_value_for

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
