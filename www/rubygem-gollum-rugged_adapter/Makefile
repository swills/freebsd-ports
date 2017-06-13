# Created by: Torsten Zuehlsdorff <ports@toco-domains.de>
# $FreeBSD: head/www/rubygem-gollum-rugged_adapter/Makefile 441105 2017-05-17 17:16:31Z sunpoet $

PORTNAME=	gollum-rugged_adapter
PORTVERSION=	0.4.4
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Adapter for Gollum to use Rugged (libgit2) at the backend

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-mime-types>=1.15:misc/rubygem-mime-types \
		rubygem-rugged>=0.25:devel/rubygem-rugged

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
