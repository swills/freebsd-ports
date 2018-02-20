# Created by: Jason Harris <jharris@widomaker.com>
# $FreeBSD: head/sysutils/file/Makefile 462377 2018-02-20 09:02:56Z amdmi3 $

PORTNAME=	file
PORTVERSION=	5.32
CATEGORIES=	sysutils
MASTER_SITES=	ftp://ftp.astron.com/pub/file/ \
		ftp://ftp.fu-berlin.de/unix/tools/file/

MAINTAINER=	jharris@widomaker.com
COMMENT=	Utility to determine file type

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-fsect-man5
MAKE_ENV=	INSTALL_STRIP_FLAG="${STRIP}"
TEST_TARGET=	check

CONFLICTS=	tct-[0-9]*

post-patch:
	@${REINPLACE_CMD} -e 's|$$(datadir)/misc|$$(datadir)/${PORTNAME}|g' \
		${WRKSRC}/configure

.include <bsd.port.mk>
