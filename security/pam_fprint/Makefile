# Created by: barner
# $FreeBSD: head/security/pam_fprint/Makefile 469113 2018-05-05 14:20:33Z danfe $

PORTNAME=	pam_fprint
PORTVERSION=	20080330
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	DEBIAN/pool/main/p/${PORTNAME:C/_/-/}
DISTNAME=	${PORTNAME:C/_/-/}_${PORTVERSION}+git.orig

MAINTAINER=	lichray@gmail.com
COMMENT=	PAM module offering finger print authentication using libfprint

LIB_DEPENDS=	libfprint.so:security/libfprint

GNU_CONFIGURE=	yes
NO_WRKSUBDIR=	yes
USES=		autoreconf pkgconfig

PLIST_FILES+=	bin/pam_fprint_enroll \
		lib/pam_fprint.so

SUB_FILES=	pkg-message

.include <bsd.port.mk>
