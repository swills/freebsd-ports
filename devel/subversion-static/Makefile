# $FreeBSD: head/devel/subversion-static/Makefile 469100 2018-05-05 10:49:36Z antoine $

PKGNAMESUFFIX=	-static

CONFLICTS_INSTALL=	${PORTNAME}-[0-9]*

OPTIONS_EXCLUDE=	${OPTIONS_DEFINE}
OPTIONS_SLAVE=		FREEBSD_TEMPLATE P4_STYLE_MARKERS SERF STATIC

BROKEN=		fails to link: (.text+0xf936a): undefined reference to `log'
DEPRECATED=	Broken for more than 6 months
EXPIRATION_DATE=	2018-06-06

MASTERDIR=	${.CURDIR}/../subversion
PKGMESSAGE=	${.CURDIR}/pkg-message

# Set these by hands, as options are undefined
PLIST_SUB+=	TOOLS="@comment " \
		SVNSERVE_WRAPPER="@comment " \
		BDB="@comment " \
		NLS="@comment "

.include "${MASTERDIR}/Makefile"
