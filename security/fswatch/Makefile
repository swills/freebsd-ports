# Created by: dominik karczmarski <dominik@karczmarski.com>
# $FreeBSD: head/security/fswatch/Makefile 482848 2018-10-23 17:23:02Z 0mp $

PORTNAME=	fswatch
DISTVERSION=	0.02beta5
PORTREVISION=	1
CATEGORIES=	security sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-0.02beta5

MAINTAINER=	0mp@FreeBSD.org
COMMENT=	File system checksum checker

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

CONFIGURE_ARGS=	--prefix=${PREFIX} \
		--enable-regex \
		--enable-stflags
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} '/INSTALL/ s|prefix)|DESTDIR)$$(&|' \
		${WRKSRC}/examples/Makefile.in

.include <bsd.port.mk>
