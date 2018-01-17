# $FreeBSD: head/textproc/rubygem-rouge2/Makefile 459191 2018-01-16 15:53:33Z swills $

PORTNAME=	rouge
PORTVERSION=	2.2.1
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	2

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Simple, easy-to-extend drop-in replacement for pygments

LICENSE=	BSD2CLAUSE MIT
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes
PLIST_FILES=	bin/rougify

PORTSCOUT=	limit:^2.*

.include <bsd.port.mk>
