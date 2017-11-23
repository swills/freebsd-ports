# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/npm-node4/Makefile 454517 2017-11-20 04:31:04Z sunpoet $

PKGNAMESUFFIX=	-node4

CONFLICTS_INSTALL=	npm npm-node6 npm-node8 npm2 npm3 npm4

OPTIONS_EXCLUDE=NODE NODE6 NODE8
OPTIONS_SLAVE=	NODE4

MASTERDIR=	${.CURDIR}/../npm

.include "${MASTERDIR}/Makefile"
