# $FreeBSD: head/ftp/php72-ftp/Makefile 454302 2017-11-16 10:48:48Z tz $

CATEGORIES=	ftp

MASTERDIR=	${.CURDIR}/../../lang/php72

PKGNAMESUFFIX=	-ftp

post-patch:
	@${REINPLACE_CMD} s/HAVE_OPENSSL_EXT/__FreeBSD__/ \
		${WRKSRC}/ftp.* ${WRKSRC}/php_ftp.*

.include "${MASTERDIR}/Makefile"
