# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/rubygem-vte3/Makefile 493306 2019-02-18 18:22:12Z sunpoet $

PORTNAME=	vte3
PORTVERSION=	3.3.2
CATEGORIES=	x11-toolkits rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby binding for VTE

LICENSE=	LGPL21+

BUILD_DEPENDS=	rubygem-rake>=0:devel/rubygem-rake
RUN_DEPENDS=	rubygem-gtk3>=${PORTVERSION}:x11-toolkits/rubygem-gtk3

USES=		gem gnome
USE_GNOME=	vte3
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
