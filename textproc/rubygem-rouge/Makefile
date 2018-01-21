# $FreeBSD: head/textproc/rubygem-rouge/Makefile 459346 2018-01-18 14:43:51Z sunpoet $

PORTNAME=	rouge
PORTVERSION=	3.1.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Simple, easy-to-extend drop-in replacement for pygments

LICENSE=	BSD2CLAUSE MIT
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

CONFLICTS_INSTALL=	rubygems-rouge2

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes
PLIST_FILES=	bin/rougify

.include <bsd.port.mk>
