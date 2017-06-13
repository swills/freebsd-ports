# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: head/sysutils/fusefs-cryptofs/Makefile 430761 2017-01-07 01:07:55Z adamw $

PORTNAME=	cryptofs
PORTVERSION=	0.6.0
PORTREVISION=	7
CATEGORIES=	sysutils
MASTER_SITES=	http://BSDforge.com/projects/source/sysutils/fusefs-cryptofs/
PKGNAMEPREFIX=	fusefs-

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Encrypted filesystem for FUSE

LICENSE=	GPLv2

LIB_DEPENDS=	libgcrypt.so:security/libgcrypt

GNU_CONFIGURE=	yes
USES=		fuse pkgconfig
USE_GNOME=	glib20
DOCS=		README cryptofs.conf

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
