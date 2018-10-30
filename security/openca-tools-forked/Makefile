# Created by: Sergei Vyshenski <svysh.fbsd@gmail.com>
# $FreeBSD: head/security/openca-tools-forked/Makefile 483101 2018-10-27 02:42:27Z swills $

PORTNAME=	openca-tools-forked
PORTVERSION=	1.4.0
DISTVERSIONPREFIX=	v
PORTREVISION=	3
CATEGORIES=	security

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Tools to deal with SCEP and PKCS7 messages

LICENSE=	APACHE20

BROKEN_SSL=	openssl-devel

USES=		gmake perl5 ssl

GNU_CONFIGURE=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	openxpki

CONFIGURE_ARGS+=	--with-openssl-prefix=${OPENSSLBASE}

# security/openssl already has a verify.1 manpage.
post-install:
.for f in sign.1 verify.1
	@${MV} ${STAGEDIR}${PREFIX}/man/man1/${f} ${STAGEDIR}${PREFIX}/man/man1/openca-${f}
.endfor

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD && ${OSVERSION} >= 1200000 && ${SSL_DEFAULT} == base
BROKEN=	OpenSSL-1.1.1 not supported by the upstream
.endif

.include <bsd.port.post.mk>
