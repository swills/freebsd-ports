# Created by: Colin Percival
# $FreeBSD: head/sysutils/tarsnap/Makefile 436247 2017-03-15 14:45:30Z mat $

PORTNAME=	tarsnap
PORTVERSION=	1.0.37
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://www.tarsnap.com/download-http/
DISTNAME=	${PORTNAME}-autoconf-${PORTVERSION}

MAINTAINER=	cperciva@tarsnap.com
COMMENT=	Online encrypted backup service (client)

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	CFLAGS="-I${OPENSSLINC} ${CFLAGS}" \
		LDFLAGS="-L${OPENSSLLIB} ${LDFLAGS}"

USES=		gmake tar:tgz ssl

.include <bsd.port.pre.mk>

# safety check to ensure that we don't violate the license
.if exists(${PATCHDIR})
RESTRICTED=	license only allows redistribution and use of unmodified source and binaries
.endif
LEGAL_TEXT=	license restricts redistribution of source and binaries

.if ${SSL_DEFAULT:Mopenssl-devel}
BROKEN=		Does not build with openssl-devel
.endif

.include <bsd.port.post.mk>
