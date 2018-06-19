# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-rugged/Makefile 472117 2018-06-10 08:08:26Z antoine $

# Also update devel/libgit2, devel/libgit2-glib, devel/py-pygit2

PORTNAME=	rugged
PORTVERSION=	0.27.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Rugged is a Ruby binding to the libgit2 linkable library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	libgit2>=${PORTVERSION:R}:devel/libgit2
LIB_DEPENDS=	libgit2.so:devel/libgit2 \
		libgmp.so:math/gmp

CONFIGURE_ARGS=	--use-system-libraries
USE_RUBY=	yes
USES=		gem pkgconfig

.include <bsd.port.mk>
