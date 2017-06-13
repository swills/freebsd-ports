# Created by: Pawel Pekala <pawel@FreeBSD.org>
# $FreeBSD: head/mail/claws-mail-pgp/Makefile 438695 2017-04-17 14:07:47Z pawel $

PORTNAME=	pgp
PORTREVISION=	0

COMMENT=	PGP plugins for Claws Mail

LIB_DEPENDS=	libgpgme.so:security/gpgme

CLAWS_PLUGINS_BUILD=	pgpcore pgpinline pgpmime smime

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
