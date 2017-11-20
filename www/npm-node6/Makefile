# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/npm-node6/Makefile 454518 2017-11-20 04:31:19Z sunpoet $

PKGNAMESUFFIX=	-node6

CONFLICTS_INSTALL=	npm npm-node4 npm-node8 npm2 npm3 npm4

OPTIONS_EXCLUDE=NODE NODE4 NODE8
OPTIONS_SLAVE=	NODE6

MASTERDIR=	${.CURDIR}/../npm

.include "${MASTERDIR}/Makefile"
