# $FreeBSD: head/ftp/php71-ftp/Makefile 432324 2017-01-24 11:54:20Z tz $

CATEGORIES=	ftp

MASTERDIR=	${.CURDIR}/../../lang/php71

PKGNAMESUFFIX=	-ftp

post-patch:
	@${REINPLACE_CMD} s/HAVE_OPENSSL_EXT/__FreeBSD__/ \
		${WRKSRC}/ftp.* ${WRKSRC}/php_ftp.*

.include "${MASTERDIR}/Makefile"
