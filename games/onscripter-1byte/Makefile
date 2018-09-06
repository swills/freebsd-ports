# $FreeBSD: head/games/onscripter-1byte/Makefile 478837 2018-09-03 00:21:45Z jbeich $

PKGNAMESUFFIX=	-1byte

COMMENT=	ONScripter with ${ENGLISH_DESC:tl} support

PLIST_FILES=	bin/${PKGBASE}

OPTIONS_SLAVE=	ENGLISH
OPTIONS_EXCLUDE=DOCS

MASTERDIR=	${.CURDIR}/../onscripter
DESCR=		${.CURDIR}/pkg-descr

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin/${PKGBASE}

.include "${MASTERDIR}/Makefile"
