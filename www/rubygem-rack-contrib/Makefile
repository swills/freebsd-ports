# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/www/rubygem-rack-contrib/Makefile 427860 2016-12-05 07:20:06Z sunpoet $

PORTNAME=	rack-contrib
PORTVERSION=	1.4.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Contributed Rack Middleware and Utilities

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	rubygem-git-version-bump>=0.15:devel/rubygem-git-version-bump \
		rubygem-rack16>=1.4:www/rubygem-rack16

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
