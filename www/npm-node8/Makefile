# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/npm-node8/Makefile 483919 2018-11-03 22:16:41Z sunpoet $

PKGNAMESUFFIX=	-node8

CONFLICTS_INSTALL=	npm npm-node10 npm-node6

OPTIONS_EXCLUDE=NODE NODE10 NODE6
OPTIONS_SLAVE=	NODE8

MASTERDIR=	${.CURDIR}/../npm

.include "${MASTERDIR}/Makefile"
