# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: head/graphics/rubygem-gd2/Makefile 418829 2016-07-20 09:33:31Z dinoex $

PORTNAME=	gd2
PORTVERSION=	1.1.1
PORTREVISION=	6
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby interface to gd 2 library

LICENSE=	GPLv2

LIB_DEPENDS=	libgd.so:graphics/gd

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

post-patch:
	@${REINPLACE_CMD} 's|libgd.so.2|libgd.so.5|' ${WRKSRC}/lib/gd2.rb

.include <bsd.port.mk>
