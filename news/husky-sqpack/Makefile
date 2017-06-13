# $FreeBSD: head/news/husky-sqpack/Makefile 441678 2017-05-25 11:45:07Z eugen $

PORTNAME=	husky-sqpack

COMMENT=	Husky FTN msgbase packer

LIB_DEPENDS=	libfidoconfig.so:news/husky-fidoconf

USE_LDCONFIG=	yes
PLIST_FILES=	bin/sqpack man/man1/sqpack.1.gz

MASTERDIR=	${.CURDIR}/../husky
COMPONENT_SUBDIR=	sqpack

post-patch:
	${REINPLACE_CMD} -e 's^/etc/fido/config^${PREFIX}/etc/fido/config^' \
		${WRKSRC}/sqpack.1

.include "${MASTERDIR}/Makefile"
