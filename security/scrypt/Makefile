# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/security/scrypt/Makefile 438412 2017-04-12 20:48:28Z cperciva $

PORTNAME=	scrypt
PORTVERSION=	1.2.1
CATEGORIES=	security
MASTER_SITES=	http://www.tarsnap.com/scrypt/

MAINTAINER=	cperciva@tarsnap.com
COMMENT=	Key Derivation Function

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	CFLAGS="-I${OPENSSLINC} ${CFLAGS}" \
		LDFLAGS="-L${OPENSSLLIB} ${LDFLAGS}"

USES=		ssl tar:tgz

PLIST_FILES=	bin/scrypt \
		man/man1/scrypt.1.gz

.include <bsd.port.mk>
