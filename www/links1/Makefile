# Created by: Michael Vasilenko <acid@stu.cn.ua>
# $FreeBSD: head/www/links1/Makefile 434573 2017-02-22 10:19:19Z amdmi3 $

PORTNAME=	links
PORTVERSION=	1.03
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	www
MASTER_SITES=	http://www.jikos.cz/~mikulas/links/download/
PKGNAMESUFFIX=	1

MAINTAINER=	pkubaj@anongoth.pl
COMMENT=	Lynx-like text WWW browser

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

PLIST_FILES=	man/man1/links.1.gz \
		bin/links

GNU_CONFIGURE=	yes

USES=		ssl
CONFLICTS=	links-2*

CONFIGURE_ARGS+=	--with-ssl=${OPENSSLBASE}

.include <bsd.port.mk>
