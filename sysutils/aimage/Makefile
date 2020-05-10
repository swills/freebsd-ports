# Created by: Chris Calvey <chris@securityforensics.co.uk>
# $FreeBSD$

PORTNAME=	aimage
PORTVERSION=	3.2.5
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	http://digitalcorpora.org/downloads/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Advanced Disk Imager

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libafflib.so:sysutils/afflib

USES=		gmake readline ssl
GNU_CONFIGURE=	yes
# Pretend ssl3_new exists for LibreSSL.  It's
# never really used but configure checks for it.
CONFIGURE_ARGS=	ac_cv_lib_ssl_ssl3_new=yes

PLIST_FILES=	bin/aimage

.include <bsd.port.pre.mk>

# LibreSSL -- OpenSSL is a no-go @ >= 12
.if ${SSL_DEFAULT:Mlibressl*}
CPPFLAGS+=		-I${OPENSSLINC}
LDFLAGS+=		-L${OPENSSLLIB}
.else # SSL_DEFAULT
BUILD_DEPENDS+=		${NONEXISTENT}:security/libressl:stage
CPPFLAGS+=		-I${WRKDIR}/libressl/include
LDFLAGS+=		-L${WRKDIR}/libressl/lib

# Don't use COPYTREE_SHARE here as it hard links files, and the
# original files are owned by root, which creates problems of its own.
pre-configure:
	@cd `${MAKE} -V STAGEDIR -C ${PORTSDIR}/security/libressl`${PREFIX} \
	    && ${FIND} -E . ! -name *.so\* | ${CPIO} -dump ${WRKDIR}/libressl >/dev/null 2>&1
.endif # SSL_DEFAULT

.include <bsd.port.post.mk>
