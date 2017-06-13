# Created by: Matt Behrens <matt@zigg.com>
# $FreeBSD: head/security/pgpgpg/Makefile 421294 2016-09-03 15:02:31Z adamw $

PORTNAME=	pgpgpg
PORTVERSION=	0.13
PORTREVISION=	4
CATEGORIES=	security
MASTER_SITES=	PACKETSTORM/crypt/pgpgpg \
		ftp://ftp.gnupg.org/gcrypt/historic/ \
		http://www.nessie.de/mroth/pgpgpg/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Wrapper for GnuPG to simulate PGP 2.6.x

BUILD_DEPENDS=	gnupg1>=0:security/gnupg1
RUN_DEPENDS=	gnupg1>=0:security/gnupg1

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-gpg-path=${LOCALBASE}/bin/gpg
PLIST_FILES=	bin/pgpgpg

.include <bsd.port.mk>
