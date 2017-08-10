# $FreeBSD: head/www/rubygem-rails_12factor/Makefile 447386 2017-08-05 03:25:17Z jrm $

PORTNAME=	rails_12factor
PORTVERSION=	0.0.3
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Run Rails the 12factor way

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-rails_serve_static_assets>=0:www/rubygem-rails_serve_static_assets \
		rubygem-rails_stdout_logging>=0:www/rubygem-rails_stdout_logging

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
