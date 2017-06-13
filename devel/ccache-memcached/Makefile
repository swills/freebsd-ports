# $FreeBSD: head/devel/ccache-memcached/Makefile 435812 2017-03-10 00:48:35Z bdrewery $

PKGNAMESUFFIX=	-memcached

MASTERDIR=	${.CURDIR}/../ccache

OPTIONS_SLAVE=	MEMCACHED

CONFLICTS_INSTALL=	ccache-[0-9]* ccache-memcached-static[0-9]* ccache-static-[0-9]*

.include "${MASTERDIR}/Makefile"
